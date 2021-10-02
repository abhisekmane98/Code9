#include<stdio.h>
int main()
{
	int a=3;
	int *start=NULL;
	printf("%d,%c",start,start);
	printf("%d,%c",*start,*start);
	getch();
	start=&a;
	printf("%d,%d",start,*start);
}
