#include<stdio.h>

typedef struct
{
	unsigned int gender : 1 ;
	unsigned int above18 : 1 ;
    char name[20] ;
	unsigned int  duration : 5 ;  // max 31
	
}POLICY_HOLDER;

int main()
{
	int i,g,s,d;
	
	FILE *fp1;
	fp1=fopen("64_data.dat","w");
	
	POLICY_HOLDER p;
	printf("%u\n",sizeof(p));
	
	for(i=0;i<=3;i++)
	{
		printf("Enter the gender  ");
		scanf("%d",&g);
		p.gender=g;
		
		printf("Enter the status of above18  ");
		scanf("%d",&s);
		p.above18=s;
		
		printf("Enter the name  ");
		scanf("%s",p.name);
		
		printf("Enter the duration  ");
		scanf("%d",&d);
		p.duration=d;
		
		fwrite(&p,sizeof(p),1,fp1);
		printf("\n");
		
	}
	fclose(fp1);
	
	fp1=fopen("64_data.dat","r");
	
	while(fread(&p,sizeof(p),1,fp1)!=0 )
	{
		printf("gender %d\nabove18 status %d\nname %s\nduration %d\n\n", p.gender, p.above18, p.name, p.duration );
	}
	
	fclose(fp1);
	
}

