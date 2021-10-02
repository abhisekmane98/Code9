#include<stdio.h>
#define BV(x) 1<<x
void showbits(unsigned int);
unsigned int checkbits(unsigned int, unsigned int, unsigned int);
int main()
{
	unsigned int x=56,p=5,n=3,r;
	printf("%d",x);
	getch();
	showbits(x);
	r=checkbits(x,p,n);
	if(r==1)
		printf("All %d digits from %d postion are 1",n,p);
	else
	    printf("Not All %d digits from %d postion are 1",n,p);
	
}
unsigned int checkbits(unsigned int x, unsigned int p, unsigned int n)
{
	unsigned int k,flag,i;
	for(i=p;i>=(p-n)-1;i--)
	{
		k=x & BV(i);
		if(k==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
void showbits(unsigned int n)
{
	unsigned int i,k;
	for(i=15;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
			
		k= n & BV(i);
		k==0 ? printf("0") : printf("1");
	}
}




