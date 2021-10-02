#include<stdio.h>
typedef struct 
{
	int id;
	char name[20];
}EMP;
int main()
{
	int i;
	EMP e[4]={1},e1={3};
	for(i=0;i<=3;i++)
	{
		printf("%d,%sa\n",e[i].id,e[i].name);
	}
	printf("\n%d,%sa",e1.id,e1.name);
}
