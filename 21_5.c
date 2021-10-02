#include<stdio.h>
#include<stdlib.h>
void call(char*);
int main()
{
	char s[]="bonaparts";
	printf("%d,",sizeof(s));  // on 64 bits pointer take 8 bytes memory
	call(s);
}

void call(char *s)
{
	printf("%d",sizeof(*s));
}
