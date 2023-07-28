#include<stdio.h>
int main()
{
	int n,a=1,b=1,c,i;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("\n%d %d",a,b);
	
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
	}
}