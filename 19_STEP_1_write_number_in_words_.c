#include<stdio.h>
int main()
{
	int p,l;
	printf("Enter a number\n");
	scanf("%d",&p);
	
	if((p/10000000)!=0)
	{
		l=p/10000000;
		printf("%d crore ",l);
		p=p-l*10000000;
	}
	
	if((p/100000)!=0)
	{
		l=p/100000;
		printf("%d lakh ",l);
		p=p-l*100000;
	}
	
	if((p/1000)!=0)
	{
		l=p/1000;
		printf("%d thousand ",l);
		p=p-l*1000;
	}
	
	if((p/100)!=0)
	{
		l=p/100;
		printf("%d hundread ",l);
		p=p-l*100;
	}
	
	printf("%d",p);
}



