#include<stdio.h>

typedef struct
{ 
	unsigned int day : 5 ;
	unsigned int month : 4 ;
	unsigned int year : 14 ;
}DATE;

typedef struct
{
	char name[40];
	DATE doj;
}EMP;

void bubble_sort(EMP*);
void display(EMP*);
void swap(EMP*,EMP*);

int main()
{
	int i;
	EMP e[4]={
				{"Abhishek",22,4,1997},
				{"rohana",24,6,1998},
				{"vedant",11,6,1998},
				{"rushikesh",13,8,1998}
	
			};
	display(e);
	bubble_sort(e);
	display(e);
}
void bubble_sort(EMP *e)
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2-i;j++)
		{
	
			if(e[j].doj.year < e[j+1].doj.year)
			{
				continue;
			}
			else
			{
				if(e[j].doj.year == e[j+1].doj.year)
				{
					
					if(e[j].doj.month < e[j+1].doj.month)
					{
						continue;
					}
					else
					{
						if(e[j].doj.month == e[j+1].doj.month)
						{
							
							if(e[j].doj.day <= e[j+1].doj.day)
							{
								continue;
							}
							else
							{
								swap(&e[j], &e[j+1] );
							}
							
						}
						else
						{
							swap(&e[j], &e[j+1] );
						}
						
					}
					
				}
				else
				{
					swap(&e[j], &e[j+1] );
				}	
				
			}
				
		}
		
	}
	
}
void display(EMP *e)
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("%d,%d,%d\n",e[i].doj.day, e[i].doj.month, e[i].doj.year);
	}
	puts("");
	
}
void swap(EMP* l, EMP* m)
{
	EMP temp;
	temp=*m;
	*m=*l;
	*l=temp;
}








