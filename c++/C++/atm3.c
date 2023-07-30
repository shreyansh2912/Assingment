#include<stdio.h>

int main()
{
    char name[20];
    printf("Enter your name, sir:\n");
    gets(name);
    printf("Welcome %s to our bank.\n", name);

    int balance = 10000;
    char action;

    printf("Your balance is %d\n", balance);

    printf("Enter 'd' to deposit or 'w' to withdraw:\n");
    scanf(" %c", &action); // Notice the space before %c to consume the newline character

    switch (action)
    {
        case 'd':
        {
            int deposit;
            printf("Enter the deposit amount:\n");
            scanf("%d", &deposit);
            balance += deposit;
            printf("Your deposited amount is %d\n", deposit);
            printf("Your new balance is %d\n", balance);
            break;
        }
        case 'w':
        {
            int withdrawal;
            printf("Enter the withdrawal amount:\n");
            scanf("%d", &withdrawal);
            if (withdrawal <= balance)
            {
                balance -= withdrawal;
                printf("Your withdrawal amount is %d\n", withdrawal);
                printf("Your new balance is %d\n", balance);
            }
            else
            {
                printf("Insufficient balance. Your balance is %d\n", balance);
            }
            break;
        }
        default:
            printf("Invalid action.\n");
    }

    return 0;
}
