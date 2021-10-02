#include<stdio.h>
int main()
{
	long long int p,d=9223372036854775807,ch=42949967296;  // ch=2*32
	
	printf("d= %lld\nch= %lld\n",ch,d);
	printf("sizeof variable k%d\n",sizeof(p));
	
	p=1<<31;
	printf("%lld",p);
}

