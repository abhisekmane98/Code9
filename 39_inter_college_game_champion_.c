#include<stdio.h>
#define BV(x) 1<<x
int main()
{
	char *sports[]={
				 	    "cricket",
				  		"basketball",
				 		"football",
					    "hockey",
					    "lawn tennis",
				  		"table tennis",
				  		"carom",
				  	    "chess"
				  	    
		      },  *s[8]={NULL};
		      
	int game=12,k,count=0,i;
	
	for(i=7;i>=0;i--)
	{
		k=game & BV(i);
		
		if(k!=0)
		{
			s[i]=sports[i];
			count++;
		}
	}
	
	if(count>=5)
	{
		printf("yes this particular college with 'game variable' won championship\n");
		
		for(i=0;i<=7;i++)
		{
			printf("%d,%s\n",i,s[i]);
		}
	}
	else
	{
		printf("only %d matches win by this particular team with 'game variable' so they lost",count);
	}
}
