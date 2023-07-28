#include<stdio.h>
int main()
{
	int a[3][2]={1,2,3,4,5,6};
	int b[3][2]={4,5,6,3,1,2};
	int c;
	int row,col;
	printf("----first matrix----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",a[row][col]);
		} 
		printf("\n");
	
	}
	
	printf("----second matrix----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",b[row][col]);
		}
		printf("\n");
	}
	
	printf("--addition of matrix--\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c=a[row][col]+b[row][col];
			printf("%d",c);
		}
		printf("\n");
	}
	
	
}