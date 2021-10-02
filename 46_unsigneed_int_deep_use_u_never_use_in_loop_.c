#include<stdio.h>
#define BV(x) 1<<x

void showbits(unsigned int ch);

int main()
{
	unsigned int x=-5;
	printf("%u\n",x);  // %u only %d create pb
	showbits(x);
}

void showbits(unsigned int ch)
{
	int i;  
	unsigned int k,andmask;
	for(i=31;i>=0;i--)  // i should int only, unsigned int is create pb 
	{
		if(i%4==3)
			printf(" ");
		andmask=1<<i;
		k=ch & andmask;
		k==0 ? printf("0") : printf("1");
	}
	printf("\n");
}
