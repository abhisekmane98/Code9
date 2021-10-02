#include<stdio.h>
#include<math.h>
#define BV(x) 1<<x

void print_year(int);
void print_stream(int,char**);
void check_room(int,int*);
void showbits(int);

int main()
{
	int data[]={273,548,786,1096,65297,2147483409},i,room_no,k; // 1,2,3,4,255,8388607
	char *stream[]={ 
				   		"Mechanical",
				   		"Chemical",
				   		"Electronics",
				   		"CS"
				   
			  		};

	for(i=0;i<=5;i++)
	{
		print_year(data[i]);
		print_stream(data[i],stream);
		
		k=data[i]>>8;	
		printf("Room no. %d\n",k);
		
		puts("");
		puts("");
	}
	
    printf("Enter a room no between 1 to 255\n");
    scanf("%d",&room_no);
    
    check_room(room_no,data);
	
			  

	
}
void print_year(int n)
{
	int i,k;
	for(i=3;i>=0;i--)
	{
		k=n & BV(i);
		if(k==BV(i))
		{
			printf("year %d\n",++i);
			break;
		}
	}
	
}
void print_stream(int n,char **stream)
{
	int i,k;
	for(i=7;i>=4;i--)
	{
		k=n & BV(i);
		if(k==BV(i))
		{
			printf("stream %s\n",stream[i-4]);
			break;
		}
	}
	
}

void check_room(int room_no,int *data)  // 4
{
	int k,i,flag=1;
	for(i=0;i<=5;i++)
	{
		k=data[i]>>8;
		if(k==room_no)
		{
			flag=0;
			puts("this room is filled");
			break;
		}
	}
	if(flag==1)
		puts("Room is open");
}

void showbits(int ch)
{
	int i;
	int k,andmask;
	for(i=31;i>=0;i--)
	{
		if(i%4==3)
			printf(" ");
		andmask=1<<i;
		k=ch & andmask;
		k==0 ? printf("0") : printf("1");
	}
	printf("\n");
}
