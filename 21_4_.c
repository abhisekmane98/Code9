#include<stdio.h>
#include<stdlib.h>
void call(int*);
int main()
{
	int a[]={2,3,5,1};
	printf("%d,",sizeof(a));  // on 64 bits pointer take 8 bytes memory
	call(a);
}

void call(int *a)
{
	printf("%d",sizeof(*a));
}
