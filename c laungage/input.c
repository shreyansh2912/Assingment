#include <stdio.h>
int main() 
{
    int even=0,odd=0,evensum,num;
    for (int i=1; i<=10;i++) 
	{
        printf("Enter the number %d: ",i);
        scanf("%d", &num);
        if (num % 2 == 0) 
		{
            printf("%d is a Even number:\n ",num);
            even++;
            even+=num;
        } 
		else 
		{
            printf("%d is a odd number: \n",num);
            odd+=num;
        }
}
     printf("Sum of Even number is:%d ",even);
     printf("sum of odd number is:%d ",odd);

}