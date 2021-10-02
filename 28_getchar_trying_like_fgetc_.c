#include<stdio.h>
int main()
{
	int i;
	char ch;
	while( (ch=getchar() )!=EOF)
	{
		printf("%c",ch);
		getch();
	}
	
}
