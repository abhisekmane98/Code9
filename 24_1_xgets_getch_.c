#include<stdio.h>
void xgets(char*);
void xputs(char*);
int main()
{
	char s[10];
	xgets(s);
	xputs(s);
}

void xgets(char *s)
{
	
	char ch,*p=s;
	printf("Enter a string\n");
	
	while((ch=getch())!='\r')
	{
		*s=ch;
		s++;
	}
	getch();
	*s='\0';
	printf("a %s c\n",p);

}

void xputs(char *ch)
{
	printf("b ");
	for(;*ch!='\0';ch++)
	{
		printf("%c",*ch);
	}
	printf(" d");
}
