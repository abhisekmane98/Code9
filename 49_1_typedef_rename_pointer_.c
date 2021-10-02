// typedef new issue
#include<stdio.h>
int main()
{
	int a=3;
	typedef int* PINT;
	PINT q;
	q=&a;
	printf("%d",*q);
}
