#include<stdio.h>
#include<math.h>

int main()
{
	#ifdef _math_h
		printf("defined already");
	#else
		printf("Not defined");	
	#endif
}
