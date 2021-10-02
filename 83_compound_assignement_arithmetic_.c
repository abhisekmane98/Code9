#include<stdio.h>
int main()
{
	int a=1,b=2,c=8,k=3;
	
	k+=a-=(b)/=2;
	
	printf("%d,%d,%d,%d",c,b,a,k);
}
