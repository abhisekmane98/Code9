#include<stdio.h>
typedef struct
{
	char id;
	char name[40];
	int age;
}EMP;

int main()
{
	EMP e1={'a',"suresh",23};
	typedef EMP* PEMP;
	PEMP q;
	q=&e1;
	
	printf("%d,%d,%d,%d\n",&e1,&e1.id,&e1.name,&e1.age );
	printf("%d,%d,%d,%d\n", q,&(q->id),q->name,&(q->age) );
	printf("%c,%c,%d\n",q->id,*(q->name),q->age);

}



