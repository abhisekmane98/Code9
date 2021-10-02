// 4294967295
#include<stdio.h>
void showbits(int);

int main()
{
	unsigned long long int p=0, ch=9223372036854775808;  // ch=2*63
	
	printf("ch= %llu\n",ch);
	printf("sizeof variable p is %d\n",sizeof(p));
	
	printf("%llu\n",p);
	
	p=1<<31;
	printf("%llu\n",p);
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
