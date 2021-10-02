#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	char *s1=(char*) (malloc(40*sizeof(char)) );
	char *s2=(char*) (calloc(40,sizeof(char)) );
	
	printf("%d,%d\n",sizeof(s1),sizeof(s2));
	
	realloc(s1,10*sizeof(char));
	realloc(s2,10*sizeof(char));

	printf("%d,%d\n",sizeof(s1),sizeof(s2));
	
	char p1[]="bonaparts",p2[]="shivkingr";
	
	strcpy(s1,p1);
	strcpy(s2,p2);
	
	for(i=0;i<=9;i++)
	{
		printf("%c,",s1[i]);
		printf("%c\n",s2[i]);
		
	}
	
	
}
