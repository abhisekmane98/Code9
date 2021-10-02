#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	size_t s1,s2,s4=4;
	printf("%u\n",sizeof(size_t));
	char ch[]="roha loves abhi";
	
	s1=sizeof(int);
	s2=strlen(ch);
	int *s3=(int*)malloc(s4*sizeof(int));
	
	printf("%d,%d",s1,s2);
}
