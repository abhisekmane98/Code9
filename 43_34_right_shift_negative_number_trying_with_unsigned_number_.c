#include<stdio.h>
void showbits(unsigned char);
int main()
{
	unsigned char num=5; 
	printf("%d\n",sizeof(num));
	getch();
	num=128;
	showbits(num);
	num=num>>2;            
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
