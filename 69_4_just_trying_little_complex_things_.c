#include<stdio.h>
typedef struct 
{
	int id;
	char name[20];
}EMP;
int main()
{
	int i,j;
	EMP e1={3,"abhishek"}, e[4][3]={e1};
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d,%sa  ",e[i][j].id,e[i][j].name);
		}
		printf("\n");
	}

}
