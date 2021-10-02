#include<stdio.h>
#include<stdarg.h>
void avg(int,...);

int main()
{
	void (*ptr)(int,...);
	ptr=avg;
	
	(*ptr)(4,2,3,5,6);
	(*ptr)(3,2,7,3);
	
}

void avg(int count,...)
{
	int i,sum=0,avg;
	va_list p;
	va_start(p,count);
	for(i=1;i<=count;i++)
	{
		sum= sum+ va_arg(p,int);
	}
	avg=sum/count;
	printf("%d\n",avg);
}
