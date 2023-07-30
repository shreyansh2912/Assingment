#include<iostream>
using namespace std; 
 int main()
{
  char name[20];
  char i[10];
  cout<<"enter your name:\n";
  //cin.ignore();
  gets(name);
  cout<<"Enter your 10 digits Account Number : "<<endl;
  cin>>i;
  cout<<"\n";
   cout<<"welcome to our website "<< name<<endl;
   
   int a=100000,b,c;
   char deposite;
   {
   	cout<<"your bank balance is \n"<<a<<endl;
	}
	 cout<<"if you want to deposite then type d or w for withdrawl\n";
	cin>>deposite;  
	cout<<"Enter your amount:"<<endl;
     switch(deposite)
	 {
	 	case'd':
	 	{
	 	cin>>b;
	 		{
	 			cout<<"your deposite amount is"<<b<<endl;
			 }
			 a+=b;
			 {
			 	cout<<"your balance in Account number "<<i<<"is"<<endl<<a<<endl;
			 }
	    }
	     break;
		 case'w':
		{
		  
		 	cin>>c;
		 	if(a>=c)
		 	{
		 		cout<<"enter your withdrawal amount "<<c<<endl;
			     a-=c;
			  	cout<<"your balance in Account number "<<i<<"is"<<endl<<a<<endl;
		     }
			 else
			 {
			 
			   	 cout<<"you do not have sufficient balance ";
		     }
	    }
	    break;
	 	
	 } 	
}

	

