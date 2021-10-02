#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[40],s1[20]="roha" ,s2[20]="loves";
	int p=148, q=32, r=24;
	float x=38.20, y=18.20;
	
	sprintf(s,"%s,%d,%f,%d,%f,%d,%s",s1,p,x,q,y,r,s2);
	printf("%s",s);
	
}
