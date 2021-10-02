#include<stdio.h>
typedef struct
{
	char a : 2 ; // 0,1,2,3 variable a have 1 byte memory in which we are using 2 bits
	char b : 4 ; // 0,1,2,.....15
	char c : 6 ;
}NUM;

int main()
{
	NUM n;
	printf("%u\n",sizeof(n));
	n.a='\0';
	n.b='\n';
	n.c=40;

	printf("k%dk\n",n.a);
	printf("k%dk\n",n.b);
	printf("k%dk\n",n.c);
}



