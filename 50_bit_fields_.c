#include<stdio.h>
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
				{0,3,5,15},
				{1,2,7,0},
				{1,0,0,1},
				{0,1,3,4}
				
		     };
	int i;
	for(i=0;i<=3;i++)
	{
		printf("%u,%u,%u,%u\n",e[i].gender,e[i].mar_stat,e[i].hobby,e[i].scheme);
	}
		     
}


