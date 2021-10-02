#include<stdio.h>
#define BV(x) 1<<x
void showbits(int);

int main()
{
	long long int p,d=9223372036854775807,ch=42949967296;  // ch=2*32
	
	printf("d= %lld\nch= %lld\n",ch,d);
	printf("sizeof variable k%d\n",sizeof(p));
	
	p=1<<31;
	printf("%lld\n",p);
	showbits(p);
}

void showbits(int ch)
{
	int i;
	int k,andmask;
	for(i=31;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
		andmask=1<<i;
		k=ch & andmask;
		k==0 ? printf("0") : printf("1");
	}
	printf("\n");
}
