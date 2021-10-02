#include<stdio.h>
#define ISDIGIT(y) y>=48 && y<=57
int main()
{
	char y;
	printf("Enter a character\n");
	scanf("%c",&y);
	
	#undef ISDIGIT
	
	#ifdef ISDIGIT
		puts("ISDIGIT is already defined");
	#else
		puts("ISDIGIT NOT defined yet");
	#endif
	
	#ifndef ISDIGIT
		#define ISDIGIT(y) y>=48 && y<=57
		puts("Now i defined ISDIGIT");
	#endif
	
	
	
//	if(ISDIGIT(y) )
//		puts("character Entered is digit");
	if(islower(y) )
		puts("characte Enterd is lower");
	if(isupper(y) )
		puts("characte Enterd is upper");
}
