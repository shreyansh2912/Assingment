#include <stdio.h>
int main()
{
	int a,c;      
	float b,x,y;
	char interest;  
	printf("enter your amount:\n");
	scanf("%d",&a);
	printf("enter your rate of interest:\n");
	scanf("%f",&b);
	printf("enter years:\n");
	scanf("%d",&c);
		
			x=a*b/100*c;
	     printf("your simple interest is: %f",x);
	
	return 0;
}