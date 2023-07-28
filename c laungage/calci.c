#include <stdio.h>
int main ()

{
	int a,b,c,d,e,x,y;
	printf ("enter your values\n ");
	scanf ("%d",&x);
	scanf("%d",&y);
	
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	e=x%y;
	
	printf("addition of %d\n ",a);
	printf("substarction of %d\n",b);
	printf("multiplication of %d\n ",c);
	printf("divison of %d\n",d);
	printf("modulo of %d\n",e);
}