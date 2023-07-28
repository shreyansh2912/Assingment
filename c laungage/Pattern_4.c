#include<stdio.h>
int main()
{
	int i, num=1, s;
	for (i=1; i<=5; i++)
	{
		for (s=1; s<=i; s++)
		{
		printf("%d ", num);
		num++;
		}
		printf("\n");
	}
}