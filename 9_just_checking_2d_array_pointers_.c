#include<stdio.h>
#include<stdlib.h>
void fun(int (*)[3]);

int main()
{
	int a[3][3]={
				  6,1,1,
				  4,-2,5,
				  2,8,7
				};
	fun(a);
}

void fun(int (*p)[3]) //p=&a[0];
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",p[i][j]); //*(*(p+i)+j )
		}
		puts("");
	}
}
