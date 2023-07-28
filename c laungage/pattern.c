#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=10;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" * ");
		}
         printf("\n");
	}
	for(i=10;i>1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf(" * ");
		}
		printf("\n");
	}
}