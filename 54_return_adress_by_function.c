#include<stdio.h>
int* add(int,int);
int main()
{
	int a=3,b=2,*k;
	int* (*p)();
	p=add;
	k=(*p)(a,b);
	printf("%d",a+b);
}

int* add(int a,int b)
{
	int c=a+b;
	return &c;
}
