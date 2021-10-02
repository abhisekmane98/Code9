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

int compare(const void*,const void*);
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
	qsort(e,4,sizeof(EMP),compare);
	display(e);
}
int compare(const void *p, const void *q)
{
	
	EMP l=*(EMP*)p, m=*(EMP*)q ;
	
			if(l.doj.year < m.doj.year)
			{
				//return (l.doj.year-m.doj.year ); 	
				 return -1;  // no change
			}
			else
			{
				if(l.doj.year == m.doj.year)
				{
					
					if(l.doj.month < m.doj.month)
					{
						//return(l.doj.month - m.doj.month);	
						 return -1;  // no change
					}
					else
					{
						if(l.doj.month == m.doj.month)
						{
							
							if(l.doj.day <= m.doj.day)
							{
								//return(l.doj.day - m.doj.day );		
								return -1; //   no change
							}
							else
							{
								//return(l.doj.day - m.doj.day ); 
							   return 1; //swap 
							}
							
						}
						else
						{
							//return(l.doj.month - m.doj.month);  
							return 1; // 1 swap
						}
						
					}
					
				}
				else
				{
					// return (l.doj.year-m.doj.year );  
					 return 1; // swap
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








