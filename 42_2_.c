// 4294967295
#include<stdio.h>
int main()
{
	unsigned long int p,ch=4294967295;  // ch=2*32
	
	printf("ch= %lu\n",ch);
	printf("sizeof variable p is %d\n",sizeof(p));
	
	p=1<<31;
	printf("%lu",p);
}

