#include<stdio.h>
void sum(int,...);

int main()
{
	int n;
	void (*p)(int,..);
	p=sum;
	
	printf("Enter number of arguments you wanna pass to sum  ");
	scanf("%d",&n);
	
	p(n,)
}
