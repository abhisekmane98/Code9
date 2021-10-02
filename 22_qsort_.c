#include<stdio.h>
int compare(const void*,const void*);
int main()
{
	char s[]="bonapart";
	qsort(s,8,1,compare);
	printf("%s",s);
}

int compare(const void *p,const void *q)
{
	char l=*(char*)p, m=*(char*)q;
	return l-m;
	
}
