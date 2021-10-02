#include<stdio.h>
int main()
{
	char i,j,s[3][4]={0};
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}
