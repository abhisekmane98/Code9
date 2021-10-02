#include<stdio.h>
void convert(int,char*);
int main()
{
	int p,l,l1,l2;
	
	printf("Enter a number\n");
	scanf("%d",&p);
	
	if(p==0)
		printf("zero");
	
	if((p/10000000)!=0)
	{
		l=p/10000000;
		convert(l,"crore");
		p=p-l*10000000;
	}
	
	if((p/100000)!=0)
	{
		l=p/100000;
		convert(l,"lakh");
		p=p-l*100000;
	}
	
	if((p/1000)!=0)
	{
		l=p/1000;
		convert(l,"Thousand");
		p=p-l*1000;
	}
	
	if((p/100)!=0)
	{
		l=p/100;
		convert(l,"hundread");
		p=p-l*100;
	}
	
	// now p is single digit number or 2 digit number
	l=p;
	convert(l,"");
		
	
}

void convert(int l,char *s)
{
	int l1,l2;
	9
	char *s1[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","tewleve",
					"thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
					
	char *s2[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
	
	if(l<=19)
	{
		printf("%s ",s1[l]);
	}
	else
	{
		l2=l/10; // tenth place
		l1=l-l2*10;  
		printf("%s %s ",s2[l2],s1[l1]);
	}
	printf("%s ",s);
	
}






