#include<stdio.h>
typedef struct 
{
	int id;
	char name[20];
}EMP;
int main()
{
	int i,j;
	EMP e[4][3]={{1,"abhi"},{2,"sunny"}},e1={3};
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d,%sa  ",e[i][j].id,e[i][j].name);
		}
		printf("\n");
	}
	printf("\n%d,%sa",e1.id,e1.name);
}
