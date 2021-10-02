#include<stdio.h>
int main()
{
	int a=3,b=2;
	int* c=&a, d=&b ;
	printf("%u,%u",sizeof(c),sizeof(d) );
}
