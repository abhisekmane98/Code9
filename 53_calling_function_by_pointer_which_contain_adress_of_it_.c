#include<stdio.h>
void add(int,int);
float product(int,float);
void check_upper(char);

int main()
{
	int a=3,b=2;
	float c=2.5,k;
	char ch,ch2;
	ch='a';
	ch2='B';
	
	void (*p)(int,int);
	float (*q)(int,float);
	void (*r)(char);
	
	p=add;
	q=product;
	r=check_upper;
	
	(*p)(a,b);
	
	k=(*q)(a,c);
	printf("%f\n",k);
	
	(*r)(ch);
	(*r)(ch2);
}

void add(int a,int b)
{
	printf("%d\n",a+b);
}

float product(int a,float c)
{
	return (a*c);
}

void check_upper(char ch)
{
	if(isupper(ch)>0)
		puts("upper case letter");
	else
		puts("lower case letter");
}



