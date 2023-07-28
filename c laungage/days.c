#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number of day:");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
		     printf("Tuesday");
			 break;
		case 3:
		     printf("wednesday");
			 break;	 	
		case 4:
			printf("Thursday");
			break;
		case 5:
		     printf("Friday");
			 break;
		case 6:
		     printf("Seturday");
			 break;	 	
		case 7:
		     printf("Sunday");
			 break;	 	
			 
		default	:
		     printf("Enter valid number"); 
	}
}