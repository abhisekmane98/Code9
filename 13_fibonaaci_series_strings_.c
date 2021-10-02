#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fibonaaci(char*,char*);
int main()
{
	char s1[16]="a",s2[16]="b";
	fibonaaci(s1,s2);
}

void fibonaaci(char *s1,char *s2)
{
//	if( strlen(s2)>=16 )
//		exit(1);
	char temp[16];
	strcpy(temp,s2);
	strcat(s2,s1);
	strcpy(s1,temp);
	printf("%s\n",s2);
	fibonaaci(s1,s2);
}
