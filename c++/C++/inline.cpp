#include<iostream>
using namespace std;
inline int multiply (int a,int b)
{  
	return a*b;
	
}
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
	int x,y;
	cout<<"Enter your values "<<endl;
	cin>>x>>y;
	int num =multiply(x,y);
	int num1=cube(x);
	int num2=cube(y);
	cout<<"Multiplication is:"<<num<<endl;
	cout<<"cube of first digit is:"<<num1<<endl;
	cout<<"cube of second digit is:"<<num2<<endl;
	
}