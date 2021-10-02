#include<stdio.h>

#pragma pack(1)
typedef struct
{
	unsigned int  a1: 2;
	unsigned int  a2: 7;
	unsigned int  a3: 20;
	
	unsigned char b1 : 1 ;
	unsigned char b2 : 8;
   	unsigned char b3 : 1;
   	
}POLICY_HOLDER;
#pragma pack()

int main()
{
	POLICY_HOLDER p;
	printf("%u",sizeof(p));
}
