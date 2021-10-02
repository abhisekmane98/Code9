// 4294967295
#include<stdio.h>
int main()
{
	unsigned long long int p=0, ch=9223372036854775808;  // ch=2*63
	
	printf("ch= %llu\n",ch);
	printf("sizeof variable p is %d\n",sizeof(p));
	
	printf("%llu\n",p);
	p=1<<31;
	printf("%llu",p);
}

