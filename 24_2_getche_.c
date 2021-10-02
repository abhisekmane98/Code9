#include<stdio.h>
void xgets(char*);
int main()
{
	int i;
	char s[25];
	xgets(s);
	for(i=0;i<=25;i++)
	{
		printf("%c,%d\n",s[i],s[i]);
	}
	printf("\n");
	for(i=0;i<=25;i++)
	{
		printf("%c",s[i]);
	}
}

void xgets(char *s)
{
	
	char ch,*p=s;
	printf("Enter a string\n");
	
	while((ch=getche())!='\r')
	{
		*s=ch;
		s++;
	}
	getch();  // to show that 'enter key ' enterd through keyboard is carriage return
	printf("\n");
	*s='\0';
	printf("%s\n",p);

}
