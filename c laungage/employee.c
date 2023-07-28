#include<stdio.h>
int ely()
{
	char name[20],address[20];
	int num,age;
	
	printf("Enter employee name ",name);
	scanf("%s",&name);
	printf("enter your age ",age);
	scanf("%d",&age);
   	printf("enter employee number: ",num);
	scanf("%d",&num);
    printf("\n");
	printf("enter your address ",address);
	scanf("%s",&address);
	printf("%s \n %s \n Age: %d Employee Number: %d \n",name,address,age,num);
	printf("\n\n");	

}
int main()
{
	int i;

	for(i=0;i<10;i++)
	{
		ely();
	}
}