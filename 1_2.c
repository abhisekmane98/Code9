#include<stdio.h>
int main()
{
	int i=2;
	{
		i=3;
		{
			i=4;
			printf("%d",i);
		}
		printf("%d",i);
	}
	printf("%d",i);
}
