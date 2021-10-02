#include<stdio.h>
#include<stdlib.h>
int main()
{
	int (*a)[2]=(int(*)[])calloc(4,sizeof(int));
	int i,j,p=1;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			a[i][j]=p++;  // *(*(a+i)+j)
		}
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",a[i][j] ); // *(*(a+i)+j)
		}
		printf("\n");
	}
}
