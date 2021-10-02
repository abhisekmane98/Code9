#include<stdio.h>
typedef int* INTP;
int main()
{
	int a=3,b=2;
	INTP c=&a, d=&b ;
	printf("%u,%u",sizeof(c),sizeof(d) );
}
