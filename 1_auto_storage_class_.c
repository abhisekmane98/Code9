#include<stdio.h>
int main()
{
	int i=2;
	{
		int i=3;
		{
			int i=4;
			printf("%d",i);
		}
		printf("%d",i);
	}
	printf("%d",i);
}
