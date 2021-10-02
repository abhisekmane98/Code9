#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int p,q,r;
	float x,y;
	
	sscanf(stdin,"%s%d,%f,%d,%f,%d,%s",s1,&p,&x,&q,&y,&r,s2);
	printf("%s\n%s\n%d,%d,%d\n%f,%f",s1,s2,p,q,r,x,y);
}
