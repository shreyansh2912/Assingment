#include<stdio.h>
int main()
{
	int a;
	printf("enter your number: ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("%d is a even number ",a);
	}
	else if(a%2==1)
	{
		printf("%d is a odd number ",a);
	}
}