#include<stdio.h>
void showbits(char);
int main()
{
	char num=128; // 128 is negative means -127
	printf("%d\n",sizeof(num));
	getch();
	showbits(num);
	num=num>>2;            
	showbits(num);
}

void showbits(char ch)
{
	int i;
	char k,andmask;
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
