#include<stdio.h>
int main()
{
	int num,reverse=0,rem;
	printf("Enter Number ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		reverse=reverse*10+rem,
		num=num/10;
	}
	printf("Reverse num is %d",reverse);
}