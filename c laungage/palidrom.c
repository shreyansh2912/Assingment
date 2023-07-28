#include<stdio.h>
#include<string.h>
int main()
{
	char num[50],pali[50];
	printf("enter the number : ");
	gets(num);
	strcpy(pali,num);
	strrev(pali);
	
	if(strcmp(pali,num)==0)
	{ printf("%s is palindrome",num);}
	
	else
	{ printf("%s is not palindrome",num); }
}