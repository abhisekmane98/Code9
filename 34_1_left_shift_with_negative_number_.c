// left shift of negative number
#include<stdio.h>
void showbits(unsigned char);
int main()
{
	// 5= 0000 0101
	// -5=1111 1011
	char num=-5; 
	num<<2;
	// num 1110 1111
	showbits(num);
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
