#include<stdio.h>
int main()
{
	char a='a',b='b';
	switch(a+b)
	{
		case 1: 
			printf("abhishek");
			break;
		case 'a'+'b':
			printf("loves");
			break;
		default :
			printf("Rohana");
	}
}
