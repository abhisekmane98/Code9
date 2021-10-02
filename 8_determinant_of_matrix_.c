#include<stdio.h>
#include<stdlib.h>
int det(int,int (*)[]);
void display(int,int (*)[]);
int main()
{
	int a[3][3]={
				  6,1,1,
				  4,-2,5,
				  2,8,7
				},n,v;
	n=3;
	v=det(n,a);
	printf("%d",v);
}

int det(int n,int (*a)[n])
{
	int i,j,k,count,sum=0,sign=1;
	
	if(n==1)
		return **a;
		
	for(i=0;i<=n-1;i++)  // n-1=2 	<=2
	{
		int (*a2)[n-1]=(int (*)[n-1])calloc((n-1)*(n-1),sizeof(int)); // assign 0 at e
	
		for(j=0;j<=n-2;j++) // n-2=1	 <=1
		{
			for(k=0,count=0;k<=n-2;k++,count++) // n-2=1 	<=1
			{
				if(count==i)
					count++;
				a2[j][k]=a[j+1][count];
			}
			
		}
		sum=sum+a[0][i]*sign*det(n-1,a2);
		sign=sign*(-1);
	
	}
	
//	printf("%d",sum);
	return sum;
}

void display(int n,int (*a)[n])
{
	int i,j;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d ",a[i][j]);
		}
		puts(""); // printf("\n");
	}
}
