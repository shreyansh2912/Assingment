#include<stdio.h>
int circle()
{
	float radius;
	float pi=3.14;
	printf("enter your radius \n");
	scanf("%f",&radius);
	printf("value is %.3f ",pi*radius*radius);
}
int rectangle()
{
	int a,b,c;
	printf("Enter the length or Breath for rectagle ");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("Area of rectangle is: %d",c);
}
int square()
{
	int a,b,c;
	printf("Enter the side of square");
	scanf("%d",&a);
	b=a*a;
	printf("Area of Square is: %d",c);
}

int main()
{
//	circle();
    int x;
    printf("Enter 1 for circle \n      2 for Rectangle \n      3 for Square:\n ");
    
    scanf("%d",&x);
    switch(x)
    {
    	case 1:
    		circle();
			break;
		
		case 2:
		     rectangle();
			 break;
			 
		case 3:
		     square();
			 break; 		
	}



}