#include<stdio.h>
int main()
{
	unsigned char ch=32,a;
	char b;
	
	a=~ch;
	b=~ch;
	
	printf("%d,%d\n",a,b);
	printf("%c,%c\n",a,b);
	
	printf("%x,%X\n",a,b);  // for b we are tryin to get hexadecimal no. for -ve no.
	
	printf("%#x,%#X",a,b);
}
