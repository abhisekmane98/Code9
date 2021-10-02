#include<stdio.h>
union pawn
{
	short int k;
	char s[2];
};

int main()
{
	union pawn p;
	printf("%d,%d\n",&p.k,p.s);
	
	p.k=73;
	printf("%d\n",p.k);
	printf("%d,%d",p.s[1],p.s[2]);
}
