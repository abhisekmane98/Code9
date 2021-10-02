#include<stdio.h>
int main()
{
	char ch1;
	int i,j;
	
	for(i=0,j=0;i<=127;i++,j++)
	{
		printf("%d,%d,%c\n",i,j,i);
	}
	for(i=-128,j=128;i<=-1;i++,j++)
	{
		printf("%d,%d,%c\n",i,j,i);
	}
	puts("");
	
	while(1)
	{
		printf("Enter a character");
		ch1=getchar();
		printf("%c,%d\n",ch1,ch1);
		getch();
	}
	

	
}

