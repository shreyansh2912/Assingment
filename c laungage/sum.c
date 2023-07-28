#include <stdio.h>
int main() 
{
    int a, sum;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a<0) 
	{a = -a;}
       int digit = a % 10;
        sum += digit;
    while (a > 0)
	{	a=a/10;
        if(a<10)
        {
        	digit = a%10;
        	sum+=digit;
		}
    }
    if (a < 0) 
	{
        sum = -sum;
    }
    printf("Sum is %d\n",sum);
}