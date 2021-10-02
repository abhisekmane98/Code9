#include<stdio.h>
int main()
{
	int i=3,j,k;
	j=i++ * i++;
	k=i++ && i++;
	printf("%d,%d,%d",i,j,k);
}
