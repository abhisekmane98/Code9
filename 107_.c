#include<stdio.h>
void add(int,int);
int main()
{
	typedef void (*ptr)(int,int);
	ptr p1;
	p1=add;
	(*p1)(2,3);
}
void add(int a,int b)
{
	printf("%d",a+b);
}
