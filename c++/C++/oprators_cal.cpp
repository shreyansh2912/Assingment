#include<iostream>
using namespace std;
float a,b;

void addition()
{
    cout <<"Addition: "<<(a + b)<<endl;
}
void sub()
{
    cout<< "Subtraction: " << (a-b)<<endl;
}
void multi()
{
	cout<< "Multiplication: " <<(a * b)<<endl;
}
void divison()
{
	cout<< "Division: " << (a/b)<<endl;
}

int main()
{
	cout<<"ENTER TWO NUMBERS"<<endl;
	cin>>a;
	cin>>b;
	addition();
	sub();
	multi();
	divison();

}