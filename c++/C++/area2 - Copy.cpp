#include<iostream>
#define pi 3.14
using namespace std;
class calculate
{
    public: 
		float a,b,c;

        area(float a, float b)
        {
             cout<<"Area of Rectangle is :"<<a*b<<endl;
             return 0;
        }
        area(float a)
        {
             cout<<"Area of Circle is : "<<pi*a*a<<endl;
             return 0;
        }
        area(float a, float b,float c)
        {
             cout<<"Area of Triangle is : "<<a*b*c<<endl;
             return 0;
        }
};

int main()
{
	int x,y,z;
	cout<<"enter values: "<<endl;
	cin>>x>>y>>z;
    calculate a;
    
     a.area(x,y);
     
     a.area(x);
     
     a.area(x,y,z);    
}