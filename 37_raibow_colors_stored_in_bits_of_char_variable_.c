#include<stdio.h>
int main()
{
	int k,i;
	unsigned char color,andmask;
	char *rainbow[]={ 
					    "violet",
						"indigo",
						"blue",
						"green",
						"yellow",
						"orange",
						"red"
					};

	
	printf("Enter a number");
	scanf("%d",&color);  

	for(i=6;i>=0;i--)     
	{
		andmask=1<<i;
		k=color & andmask;
		k==0 ? printf("-,"): printf("%s,%d, ",rainbow[i],i);
	}
}

