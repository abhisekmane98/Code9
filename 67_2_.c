#include<stdio.h>

#pragma pack(1)
typedef struct
{
	unsigned char a1 : 1 ;
	unsigned char a2 : 8;
   	unsigned char a3 : 1;
   	
}POLICY_HOLDER;
#pragma pack()

int main()
{
	POLICY_HOLDER p;
	printf("%u",sizeof(p));
}
