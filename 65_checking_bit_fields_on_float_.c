#include<stdio.h>
typedef struct
{
	float w1 : 15 ; //  99.99  7+1+7 bit w1 variable contains 4 bytes means 32 bits in which acessing 15 bits
	float w2 : 15 ;
}PETROL_PRICE;

int main()
{
	PETROL_PRICE p;
	p.w1=15;
	p.w2=20;
	
	printf("%f\n",p.w1);
	printf("%f\n",p.w2);
}



