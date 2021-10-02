#include<stdio.h>
int main()
{
	int i;
	char *s[7]={0}; // {NULL} both are same as it 1st it take ascii 
	for(i=0;i<=6;i++)
	{
		printf("%d ",s[i]);
	}
}
