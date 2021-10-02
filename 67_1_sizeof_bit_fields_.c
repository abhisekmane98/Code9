#include<stdio.h>

//#pragma pack(1)
typedef struct
{
	unsigned int  a1: 2;
	unsigned int  a2: 7;
	unsigned int  a3: 20;
	unsigned int  a4: 4;
	unsigned int  a5: 29;
	
} NUM;
#pragma pack()

int main()
{
	NUM n;
	printf("%u",sizeof(n));
	
}


