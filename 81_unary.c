#include<stdio.h>
int main()
{
	int a=2,b=1,c=5,d=3,e=4,f,k;
	
	k=--a+b-++c+!d-~e;
	printf("%d",k);
}
