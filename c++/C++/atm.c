#include<iostream>
using namespace std; 
 int main()
{
  char<<"enter your name:\n";
  gets(name);
   cout<<"welcome to our website \n"<<name<<endl;
   
   int a=10000,b,c;
   char deposite;
   {
   	cout<<"your bank balance is \n"<<endl;
	}
	 cout<<"if you want to deposite then type d or w for withdrawl\n";
	cin>>"%c",&deposite);  
     switch(deposite)
	 {
	 	case'd':
	 	{
	 	cin<<b;
	 		{
	 			cout<<"your deposite amount is\n";
			 }
			 a+=b;
			 {
			 	cout<<"your balance is \n";
			 }
	    }
	     break;
		 case'w':
		{
		  
		 	cin<<c;
		 	if(a>=c)
		 	{
		 		cout<<"enter your withdrawal amount \n";
			     a-=c;
			  	cout<<"your balance is \n";
		     }
			 else
			 {
			 
			   	 cout<<"you do not have sufficient balance ";
		     }
	    }
	    break;
	 	
	 } 	
}

	

