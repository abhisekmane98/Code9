#include<stdio.h>
void fun1();
void fun2();
void fun3();
void fun4();

# pragma startup fun1
# pragma exit fun2

int main()
{
	puts("Main");
	return 0; 
}

void fun1()
{
	puts("FUN1");
}

void fun2()
{
	puts("FUN2");
}

void fun3()
{
	puts("FUN3");
}

void fun4()
{
	puts("FUN4");
}
