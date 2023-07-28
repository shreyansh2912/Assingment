#include<stdio.h>
int findmaxnumber(int number)
{
	int maxdigit=0;
	
	if (number<0)
	number =- number;
	
	while(number>0)
	{
		int digit=number % 10;
		if(digit>maxdigit)
		maxdigit=digit			;
		number/=10;
	}
};

int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   
   int max= findmaxnumber(num);
   printf("The maximum digit in the number is: %d\n",max);
   	
}