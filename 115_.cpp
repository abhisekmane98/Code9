#include<stdio.h>
int main()
{
	int *a,b=3,c=7;
	a=&b;
	*a=5;
	a=&c;
//	const int ** p=&a;  // p is a ptr to const int ptr
	int const*const* p=&a;
//	int **const p=&a;
	a=&b;
	
}
