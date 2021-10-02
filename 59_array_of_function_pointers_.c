#include<stdio.h>

float add(int,int);
float substract(int,int);
float product(int,int);
float divide(int,int);

int main()
{
	int i,a=12,b=3;
	float (*p[4])(int,int),k;
	
	p[0]=add;
	p[1]=substract;
	p[2]=product;
	p[3]=divide;
	
	for(i=0;i<=3;i++)
	{
		k=p[i](a,b);
		printf("%f\n",k);
	}
	
	
}
float add(int a,int b)
{
	return(a+b);
}
float substract(int a,int b)
{
	return(a-b);
}
float product(int a,int b)
{
	return(a*b);
}
float divide(int a,int b)
{
	return(a/b);
}
