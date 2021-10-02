#include<stdio.h>
#include<stdarg.h>

void add(int,...);

int main()
{
	add(4,1,3,5,6);
	add(3,7,9,8);
	add(2,7,5);
}

void add(int count,...)
{
	int i,sum=0;
	va_list ptr;
	va_start(ptr,count);
	
	
	for(i=1;i<=count;i++)
	{
		sum=sum+va_arg(ptr,int);
	}
	printf("%d\n",sum);
}


