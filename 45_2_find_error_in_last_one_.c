#include<stdio.h>
#define BV(x) 1<<x

void showbits(unsigned int);
unsigned int checkbits(unsigned int, unsigned int, unsigned int);

int main()
{
	unsigned int x=16,p=5,n=3,r;
	printf("%u\n",x);
	
	showbits(x);
	
	r=checkbits(x,p,n);
	
	if(r==1)
		printf("All %u digits from %uth postion are 1",n,p);
	else
	    printf("Not All %u digits from %uth postion are 1",n,p);
	
}


unsigned int checkbits(unsigned int x, unsigned int p, unsigned int n)
{
	int i;
	unsigned int k,flag=1;
	printf("%u,%u,%u\n",x,p,n);
	
	for(i=p;i>=(p-n)+1;i--)
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
	int i;
	unsigned int k;
	
	for(i=15;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
			
		k= n & BV(i);
		k==0 ? printf("0") : printf("1");
	}
	
	puts("");
}




