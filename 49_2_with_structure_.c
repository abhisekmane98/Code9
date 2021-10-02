#include<stdio.h>
struct emp
{
	char id;
	char name[40];
	int age;
};

int main()
{
	struct emp e1={'a',"suresh",23},*q;
	
	printf("%d,%d,%d,%d\n",&e1,&e1.id,&e1.name,&e1.age);

	q=&e1;

	printf("%d,%c,%c,%d\n", q,q->id,*(q->name+2),&(q->age) );

}



