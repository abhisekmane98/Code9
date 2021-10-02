#include<stdio.h>
struct employee
{ 
	char name[40];
	int id;
}e1;

void input(struct employee*);

int main()
{
	struct employee e1[2]={				
							  {"raj",3},
							  {"shyam",6}	
						};
						
	printf("%d\n",sizeof(e1));
	input(e1);

}

void input(struct employee *e)
{
	printf("%d\n",sizeof(*e));
	printf("%s,%d",e->name,e->id);
}

