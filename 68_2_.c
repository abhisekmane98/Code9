#include<stdio.h>
int main()
{
	int i;
	enum direction
	{
		 east,west,south,north 
	}d[4];
	
	for(i=0;i<=3;i++)
	{
		scanf("%d",&d[i]);
	}
	
	for(i=0;i<=3;i++)
	{
		printf("%d",d[i]);
	}
}
