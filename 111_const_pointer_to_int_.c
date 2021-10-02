#include<stdio.h>
int main()
{
	int a=3,b=2;
	const *int p=&a,p2;
	int *const const p=&a,p2;
	
	printf("%d,%d\n",sizeof(p),sizeof(p2));
	p2=5;
//	p=&b;
	*p=4;
	printf("%d,%d",a,p2);

	
}
