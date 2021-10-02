#include<stdio.h>
void showbits(unsigned char);
int main()
{
	unsigned char b=0x32,c;
	showbits(0x0c);
	b=b^0x0c;
	showbits(b);
	
}

void showbits(unsigned char ch)
{
	int i;
	unsigned char k,andmask;
	for(i=7;i>=0;i--)
	{
		if(i==3)
			printf(" ");
			
		andmask=1<<i;
		k=ch & andmask;
		k==0 ? printf("0") : printf("1");
	}
	printf("\n");
}
