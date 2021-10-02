#include<stdio.h>

typedef struct
{ 
	unsigned int day : 5 ;
	unsigned int month : 4 ;
	unsigned int year : 14 ;
}DATE;

typedef struct
{
	char name[40];
	DATE doj;
}EMP;

int main()
{
	int i;
	EMP e[4]={
				{"Abhishek",22,4,1997},
				{"rohana",24,6,1998},
				{"vedant",11,6,1998},
				{"rushikesh",13,8,1998}
	
			};
	for(i=0;i<=3;i++)
	{
		printf("%d,%d,%d\n",e[i].doj.day, e[i].doj.month, e[i].doj.year);
	}
}

