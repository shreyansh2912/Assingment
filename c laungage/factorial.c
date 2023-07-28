#include<stdio.h>  
int main()    
{    
 	int a,factorial=1,number;    
	printf("Enter a number: ");    
  	scanf("%d",&number);    
    for(a=1;a<=number;a++)
	{    
      factorial=factorial*a;    
    }    
  printf(" Value of Factorial is: %d",factorial);     
}