#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int choice;
	cout<<"enter your values: "<<endl;
	cin>>a>>b;
	cout<<"enter 1 for addition"<<endl;
	cout<<"enter 2 for substraction"<<endl;
	cout<<"enter 3 for multiplication"<<endl;
	cout<<"enter 4 for divison"<<endl;
	cin>>choice;
	if(choice== 1)
	{
		cout<<"addition is: "<<a+b<<endl;
	}
	else if (choice==2)
	{
		cout<<"subs. is:"<<a-b<<endl;
	 }
	 else if(choice==3)
	 {
	 	cout<<"multiplication is:"<<a*b<<endl;
	 }
	 else if(choice==4)
	 {
	 	cout<<"divison is:"<<a/b<<endl;
	 }
    
	
}

