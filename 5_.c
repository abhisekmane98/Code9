#include<stdio.h>
# define TEST 7
int main()
{
//	int k=TEST;
//	TEST=7;
	
	#if TEST<5
		puts("less than 5");
	#else
		puts("greater than equal to 5");
	#endif
	
	if(TEST<5)
		puts("less than 5");
	else
		puts("greater than equal to 5");
}
