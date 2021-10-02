#include<stdio.h>
#define BV(x) 1<<x

void showbits(char);
int main()
{
	char i,ch,k;
	printf("Enter a number  ");
	scanf("%d",&ch); //40
	i=3;
	k=ch & BV(i);
	k==0 ? : (ch=ch & ~BV(i) );
	printf("%d\n",ch);
	showbits(ch);
	
	i=5;
	k=ch & BV(i);
	k==0 ? : (ch=ch & ~BV(i) );
	printf("%d\n",ch);
	showbits(ch);
	
	
}
void showbits(char ch)
{
	char i,k;
	for(i=7;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
		k=ch & BV(i);
		k==0 ? printf("0") : printf("1");
		
	}
	puts("");
	
}




