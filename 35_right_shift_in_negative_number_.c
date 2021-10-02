#include<stdio.h>
void showbits(char);
int main()
{
	// 5= 0000 0101
	// -5=1111 1011
	char num=-5; 
	num=num>>2;         
	// num 1111 1110   this will happen
	// num 0011 1110  
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
