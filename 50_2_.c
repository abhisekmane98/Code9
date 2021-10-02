#include<stdio.h>

#define Male 0
#define Female 1

#define Single 0
#define Married 1
#define Divorced 2
#define Widowed 3

typedef struct
{
	unsigned int gender : 1;
	unsigned int mar_stat : 2;
	unsigned int hobby : 3;
	unsigned int scheme : 4;
}EMP;

int main()
{
	EMP e[4]={
				{Male,Widowed,5,15},
				{Female,Divorced,7,0},
				{Female,Single,0,1},
				{Male,Married,3,4}
				
		     };
	int i;
	for(i=0;i<=3;i++)
	{
		printf("%u,%u,%u,%u\n",e[i].gender,e[i].mar_stat,e[i].hobby,e[i].scheme);
	}
		     
}


