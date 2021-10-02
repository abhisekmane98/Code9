#include<stdio.h>
int main()
{
	enum direction
	{
		 east,west,south,north 
	};
	
	enum direction d1=east, d2=west, d3=south, d4=north;
	
	printf("%d\n",d1);
	printf("%d\n",d2);
	printf("%d\n",d3);
	printf("%d\n",d4); 
	
}
