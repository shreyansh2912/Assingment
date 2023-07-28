#include<stdio.h>
int main()
{
	char a[10],b;
	printf("Enter your number ");
	gets(a);
	for(b=0;a[b]!='\0';b++);
	printf("\n length is %d",b);
}