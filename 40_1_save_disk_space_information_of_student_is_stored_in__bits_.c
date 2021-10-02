#include<stdio.h>
#include<math.h>
#define BV(x) 1<<x
void showbits(int);
int main()
{
    int n=65280,i,sum=0,k;
	showbits(n);
	getch();
	char *stream[]={ 
				   		"Mechanical",
				   		"Chemical",
				   		"Electronics",
				   		"CS"
				   
			  		};
			  
	for(i=3;i>=0;i--)
	{
		k=n & BV(i);
		if(k==BV(i))
		{
			printf("year %d\n",++i);
			break;
		}
	}
	
	for(i=7;i>=4;i--)
	{
		k=n & BV(i);
		if(k==BV(i))
		{
			printf("stream %s\n",stream[i-4]);
			break;
		}
	}
	
	for(i=31;i>=8;i--)
	{
		k=n & BV(i);
		if(k==BV(i))
		{
			sum=sum+pow(2.0,(float)(i-8) );
		}
	}
	printf("Room No. %d",sum);
	
	
}

void showbits(int ch)
{
	int i;
	int k,andmask;
	for(i=31;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
		andmask=1<<i;
		k=ch & andmask;
		k==0 ? printf("0") : printf("1");
	}
	printf("\n");
}
