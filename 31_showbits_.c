#include<stdio.h>
void showbits(int);
int main()
{
	int  ch=786;
	showbits(ch);
}
void showbits(int ch)
{
	int i;
	int k,andmask;
	for(i=11;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
		andmask=1<<i;
		k=ch & andmask;
		k==0 ? printf("0") : printf("1");
	}
}
