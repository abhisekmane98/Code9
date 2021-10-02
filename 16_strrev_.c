#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char *s[]={
						"abhishek",
						"sunny",
						"kriten",
						"Vedant",
						"vaturaj"			
									},*temp;
						

	for(j=0;j<=8;j++)
	{
	   *(s[0]+j)='k';
	//	printf("%c",*(s[0]) );
		s[0]++;
	
	}

//	puts("");
	for(i=0;i<=4;i++)
	{
		printf("%s\n",s[i]);
		getch();
		
	}
}
