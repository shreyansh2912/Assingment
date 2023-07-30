#include<iostream>
using namespace std;

class Calculator 
{
    int num1, num2;
    public:
    
    Calculator(int a, int b) 
    {   
    	cout <<"Enter Two Numbers: "<<endl;
    	cin >>num1>> num2;
        addition();
        substraction();
        multiplication();
        division();
    }
    void addition() 
	{
        cout << "Addition = " <<num1 + num2<< endl;
    }
    void substraction() 
	{
        cout << "Subtraction = " <<num1 - num2<< endl;
    }
    void multiplication() 
	{
        cout << "Multiplication = " <<num1 * num2<< endl;
    }
    void division() 
	{
        cout << "Division = " <<num1 / num2<< endl;
    }
};

int main() 
{
    int num1, num2;
    Calculator cal(num1, num2);
}