#include<iostream>
using namespace std;
int stu,rollnumber;
class student
{
	public :
		string name;
		
		int mark[100];
		void info()
		{
			cout<<"Enter student's name : ";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter student's Roll Number: ";
			cin>>rollnumber;
			for(int i=0;i<stu;i++)
			{
				cout<<"Enter your marks of subjectm "<<i+1<<":"<<endl;
				cin>>mark[i];
			}
		}
		void display()
		{
			int x= 0;
			cout<<endl<<name<<endl<<rollnumber<<endl;
			for(int i=0;i<stu;i++)
			{
				cout<<"Your marks of subject"<<i+1<<"is : "<<mark[i]<<endl;
				x += mark[i];
			}
			cout<<"Percentage of "<<name<<" is : "<<x/stu<<" %\n"<<endl;
		}
};

int main()
{
	int a;
	cout<<"Enter number of students : ";
	cin>>a;
	cout<<"Enter number of subjects : ";
	cin>>stu;
	student s[a];
	for(int i=0;i<a;i++)
	{
		cout<<endl;
		s[i].info();
	}
	for(int i=0;i<a;i++)
	{
		s[i].display();
	}
}