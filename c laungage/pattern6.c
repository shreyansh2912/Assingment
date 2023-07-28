#include<stdio.h>
int main()
{
	int a,b;
	int count=1;
	for(a=0;a<5;a++)
	{
		for(b=0;b<=a;b++)
		{
			printf(" %d",count);
			count = !count;
		}
		count=a%2;
		printf("\n");
	}
	return (0);
}