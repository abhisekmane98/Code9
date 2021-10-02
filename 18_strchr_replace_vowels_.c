#include<stdio.h>
#include<string.h>
void replace(char*,char*,char);
int main()
{
	char s[80]="ram is sweet boy sitting on bench with the umbrella",t[80],ch[]={'a','e','i','o','u','\0'};
	int i;
	for(i=0;i<=4;i++)
	{
		strcpy(t,s);
		replace(t,s,ch[i]);
		printf("%s\n",s);
	}
}

void replace(char *t,char *s,char ch)
{
	int i,count=0;
	char *p;
	printf("%s",s);
	while(strchr(t,ch)!=NULL )
	{
		p=strchr(s,ch);
		p++;
		strcpy(t,p);
		count++;
	}
	for(i=1;i<=count;i++)
	{
		p=strchr(s,ch);
		for(;(p+1)!=NULL;p++)
		{
			*p=*(p+1);
		}
		*p='\0';
	}
	
}




