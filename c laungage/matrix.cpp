#include<iostream>
using namespace std;
int main()
{
	int a[3][2]={1,2,3,4,5,6};
	int b[3][2]={4,5,6,3,1,2};
	int c;
	int row,col;
	cout<<"----first matrix----\n"<<endl;
    for(row=0;row<2;row++)
	{
    	for(col=0;col<3;col++)
		{
			cout<<a[row][col];
		} 
		cout<<"\n";
	}
	
	cout<<"----second matrix----\n"<<endl;
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			cout<<b[row][col];
		}
		cout<<"\n";
	}
	
	cout<<"--addition of matrix--\n"<<endl;
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
		 cout<<a[row][col]+b[row][col];
		}
		cout<<"\n";
	}
	
	
}