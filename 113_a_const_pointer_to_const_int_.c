#include<stdio.h>
int main()
{
	int a=3,b=2;
//	int const *const p=&a,p2;
	const int *const p=&a,p2=3;
	printf("%d,%d\n",sizeof(p),sizeof(p2));
//	p2=5;
//	p=&b;
//	*p=5;
	printf("%d,%d,%d",p,*p,p2);
}
