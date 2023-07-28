#include<stdio.h>
int main()
{
	int x[6],a,b,temp;
	char number;
	printf("Enter A for acending or d for decending ");
	scanf("%c",&number);
	switch(number)
	{
	      case 'a':
	        {
	          printf("Enter your values: ");
	          for(a=0;a<6;a++)
	            {
	    	      scanf("%d",&x[a]);
	            }
            	for(a=0;a<6;a++)
             	{
	            	for(b=a+1;b<6;b++)
		        {
		           if(x[a]>x[b])
		          {
		   	       temp=x[a];
		   	       x[a]=x[b];
		   	       x[b]=temp;
		          }
	          	}
	            }
        	printf("Arrays in ascending order: ");
        	for(a=0;a<6;a++)
        	{
	        	printf("%d,",x[a]);
	        }
            }
	break;
	
	case 'd':
	{
	printf("Enter your values: ");
	for(a=0;a<6;a++)
	{
		scanf("%d",&x[a]);
	}
	for(a=0;a<6;a++)
	{
		for(b=a+1;b<6;b++)
		{
		    if(x[a]<x[b])
		   {
		   	  temp=x[a];
		   	  x[a]=x[b];
		   	  x[b]=temp;
		   }
		}
	}
	printf("Arrays in ascending order: ");
	for(a=0;a<6;a++)
	{
		printf("%d,",x[a]);
	}
}
	break;
	default:
		printf("Enter valid input");
		break;

}
}