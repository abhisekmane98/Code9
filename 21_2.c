#include<stdio.h>
void fun1(int*);

int main()
{
	int a=3;
	printf("%d,",sizeof(a));
	fun1(&a);
}

void fun1(int *a)
{
	printf("%d",sizeof(*a));
}
