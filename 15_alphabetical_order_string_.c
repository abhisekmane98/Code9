#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char *s[]={
						"abhishek",
						"sunny",
						"kriten",
						"Vedant",
						"vaturaj"			
									},*temp;
									
	for(i=0;i<=3;i++)
	{
		for(j=i;j>=0;j--)
		{
			if( strcmp(s[j+1],s[j])>0 )
				break;
			else                  // exchanging base adress
			{
				temp=s[j+1];
				s[j+1]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%s\n",s[i]);
	}
}
