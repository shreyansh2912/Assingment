#include<stdio.h>
#include<string.h>
struct Employee 
{
	int empl_id;
	char name[100];
	float salary;
};
union Data
{
	int num;
	char letter;
};
int main()
{
	struct Employee employee1;
	employee1.empl_id=2;
	strcpy(employee1.name,"shreyansh");
	employee1.salary=50000;
	printf("Employee details(Structure)\n");
	printf("Employee id:%d\n",employee1.empl_id);
	printf("Employee Name:%s\n",employee1.name);
	printf("Employee salary:%0.2f\n",employee1.salary);
	printf("\n\n");
	union Data data;
	data.num=50;
	
	printf("Data(union):\n");
	printf("Number: %d\n",data.num);
	data.letter='S';
	printf("Letter:%c\n\n",data.letter);
	printf("Number:%d\n",data.num);
}
