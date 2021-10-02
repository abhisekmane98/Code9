#include<stdio.h>
void showbits(int);
int main()
{
	int a=3,b=5,c=7,d=1,k;
	k=a&=b|=c^=d>>=2;
	printf("%d\n",k);
	showbits(a);
	
}

void showbits(int k)
{
	int i,y;
	
	for(i=7;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
		
		y=k & 1<<i;
		y==0 ? printf("0") : printf("1");
			
	}
	puts("");
}

