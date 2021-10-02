#include<stdio.h>
void show();
int main()
{
	void (*s)();
	s=show;
	s();
}

void show()
{
	printf("may be i love rohana");
}
