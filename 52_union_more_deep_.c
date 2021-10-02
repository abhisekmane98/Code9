#include<stdio.h>
typedef union pawn
{
	char name[8];
	short signed int id[4]; // 4 id's
	double sal;
	float val[2]; // 2 values 
}PAWN;

int main()
{
	PAWN p;
	printf("%u,%u,%u,%u\n",p.name,&p.id,&p.sal,&p.val);
	p.sal=286331153;
	printf("%lf\n",p.sal);
	
	printf("%f\n",p.val[0]);
	printf("%f\n",p.val[1]);
	
}
