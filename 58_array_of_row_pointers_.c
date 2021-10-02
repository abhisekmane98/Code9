#include<stdio.h>
int main()
{
	int i;
	char s[3][20]={
					 "Abhishek",
					 "loves",
					 "rohana"
				 };
	char (*p[3])[];
	for(i=0;i<=2;i++)
	{
		p[i]=&s[i];
	}
	
	for(i=0;i<=2;i++)
	{
		printf("%s ",p[i]);
	}
}
