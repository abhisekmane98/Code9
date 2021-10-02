#include<stdio.h>
int main()
{
	int a=3;
	float b=42.39;
	void *p,*q;
	
	p=&a;
	q=&b;
	
	printf("%d,%f",*(int*)p,*(float*)q);
		
}
