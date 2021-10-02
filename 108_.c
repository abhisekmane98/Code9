#include<stdio.h>

void add(int,int);
void substract(int,int);
void multiply(int,int);

int main()
{
	typedef void (*ptr[3])(int,int);
	ptr p1;
	
	
	p1[0]=add;
	p1[1]=substract;
	p1[2]=multiply;
	
	(*p1[0])(2,3);
	p1[1](5,2);
	p1[2](5,6);
	
}


void add(int a,int b)
{
	printf("\n%d\n",a+b);
}

void substract(int a,int b)
{
	printf("%d\n",a-b);
}

void multiply(int a,int b)
{
	printf("%d\n",a*b);
}
