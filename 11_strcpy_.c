#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[]="bonapart",*l;
	char *p=(char*)calloc(10,sizeof(char));
	strcpy(l,s);
	printf("%s",l);
}
