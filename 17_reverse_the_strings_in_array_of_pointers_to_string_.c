#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j;
	char *s[]={
						"abhishek",
						"sunny",
						"kriten",
						"Vedant",
						"vaturaj"			
									},temp[5][30];
									
	for(i=0;i<=4;i++)
	{
		strcpy(&temp[i][0],s[i]);
		strrev(&temp[i][0]);
		s[i]=&temp[i][0];
		printf("%s\n",s[i]);
	}
}
