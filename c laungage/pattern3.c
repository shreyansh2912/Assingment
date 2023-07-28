#include <stdio.h>
int main()
{
	int i=11,a,b;
	
	for(a=1;a<=i;a++)
	{
		for(b=i;b>=1;b--)
		{
			if(a>=b)
			printf("* ");
			else
			printf(" ");
	     }printf("\n");
		}
}
 
