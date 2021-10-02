#include<stdio.h>
typedef struct
{
	unsigned char a : 2 ; // 0,1,2,3  
	unsigned char b : 4 ; // 0,1,2,.....15
	unsigned char c : 6 ;
}NUM;

int main()
{
	NUM n;
	n.a='\0';
	n.b='\n';
	n.c=40;

	printf("k%dk\n",n.a);
	printf("k%dk\n",n.b);
	printf("k%dk\n",n.c);
}



