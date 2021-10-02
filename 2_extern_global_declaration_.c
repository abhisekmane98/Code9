#include<stdio.h>
int a;
int main()
{
	extern int b;
	printf("%d,%d",a,b);
}
int b;
