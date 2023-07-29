#include<iostream>
using namespace std;
int circle()
{
	float radi;
	float pi=3.14;
   cout<<"enter your radius \n";
   cin>>radi;
   cout<<"Value is "<<pi*radi*radi<<endl;
}
int rectangle()
{
	int a,b,c;
	cout<<"Enter the length or Breath for rectagle "<<endl;
	cin>>a>>b;
	cout<<"Area of Rectangle is: "<<a*b<<endl;
}
int square()
{
	int a,b,c;
	cout<<"Enter the side of Square: "<<endl;
	cin>>a;
	cout<<"Area of Square is: "<<a*a<<endl;
}

int main()
{
    int x;
    cout<<"Enter 1 for circle \n      2 for Rectangle \n      3 for Square: "<<endl;
    cin>>x;
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