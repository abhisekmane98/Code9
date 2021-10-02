#include<stdio.h>
int main()
{
	typedef int a[10];
	a p,q,r;
	printf("%u,%u,%u",sizeof(p), sizeof(q), sizeof(r) );
}
