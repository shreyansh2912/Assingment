#include<stdio.h>
int main()
{
	int days,years,week,months,day;
	printf("enter your days:\n ");
	scanf("%d",&days);
	years=days/365;
//	months=(days%365)/30;
    week=(days%365)/7;
	day=(days%365)%7;
   // printf("%d \n= %d years,\n %d months,\n %d weeks,\n %d day\n",days, years, months, week, day);
    //return 0;
}
