#include<stdio.h>
int main()
{
	int i;
	char **name[]={
					"raju",
					"bonapart",
					"kristen",
					"kingdom",
					"planate",
					"aliean"
				};
	for(i=0;i<=5;i++)
	{
		printf("%s",*(name+i));
	}
}
