#include <iostream>
using namespace std;
template <typename a>
void swaping(a&x,a&y)
{
    a temp = x;
    x = y;
    y = temp;
}

int main() 
{
    int x,y;
    cout<<"Enter any two number:"<<endl;
    cin>>x;
    cin>>y;
    swaping(x,y);
    cout << "Your first value is = " <<x<<endl;
	cout << "And second value is = "<<y<<endl;
}