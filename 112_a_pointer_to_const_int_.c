#include<stdio.h>
int main()
{
	int a=3,b=2;
//	int const *p,p2;
//	const int *p,p2;

//	const int const *p,p2;
//	int const const *p,p2;
	const const int *p,p2;

	printf("%d,%d\n",sizeof(p),sizeof(p2));
//	p2=3;
	p=&a;
//	*p=4;
	
	printf("%d\n",*p);
	p=&b;
	printf("%d",*p);
	
	
}
