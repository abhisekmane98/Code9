#include<stdio.h>
struct emp
{
	char id;
	char name[40];
	int age;
};

int main()
{
	struct emp e1={'a',"suresh",23};
	typedef struct emp* PEMP;
	PEMP q;
	q=&e1;
	
	printf("%d,%d,%d,%d\n",&e1,&e1.id,&e1.name,&e1.age );
	printf("%d,%d,%d,%d\n", q,&(q->id),q->name,&(q->age) );
	printf("%c,%c,%d\n",q->id,*(q->name),q->age);

}



