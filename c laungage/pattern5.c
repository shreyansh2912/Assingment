#include<stdio.h>
int main()
{
	int a,b,c,pa=64;
	for(a=1;a<=5;a++)
	{
		pa=64;
		for(b=1;b<=a;b++)
		{
			pa+=1;
			printf(" %c",pa);
		}
		printf("\n");
	}
}