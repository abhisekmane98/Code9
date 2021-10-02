#include<stdio.h>
void gemoetry(int,...);

int main()
{
	gemoetry(2,3,2);
	gemoetry(4,2,2,4,4);
	gemoetry(6,3,1,2,3,5,1);
	
}

void gemoetry(int count,...)
{
	switch(count)
	{
		case 2:
			printf("point\n");
			break;
		case 4:
			printf("line\n");
			break;
		case 6:
			printf("triangle\n");
			break;
	}
}
