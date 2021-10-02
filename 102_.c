#include<stdio.h>
int main()
{
	int i=1,a[4]={0};
	a[++i]= i*2 + 5*i ;
	printf("%d,%d,%d",i,a[1],a[2]);
}
