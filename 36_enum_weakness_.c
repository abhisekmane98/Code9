#include<stdio.h>
enum mar_status
{
	single=3,married,divorced,widowed    
};

int main()
{
	enum mar_status person1,person2;
	person1=single;
	person2=widowed;
	printf("%d,%d",person1,person2);  // there is no way to use enumerator values in scanf and printf function
}
