#include<stdio.h>
int main()
{
	int a=5,k;
	k=&3;
	k=++a;
	k+=++a;
	printf("%d,%d",a,k);
}
