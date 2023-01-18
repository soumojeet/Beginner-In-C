#include<stdio.h>
#include<stdlib.h>
union student
{
	int roll;
	char name[25];
	int marks;
};
main()
{
	union student S[10];
	int i,j,n;
	
	printf("Enter Number Of Students : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Roll Of Student %d : ",i+1);
		scanf("%d",&S[i].roll);
		printf("Enter Name Of Student %d : ",i+1);
		scanf("%s",S[i].name);
		printf("Enter Marks Of Student %d : ",i+1);
		scanf("%d",&S[i].marks);
	}
	system("cls");
	printf("ROLL\tNAME\tMARKS\n");
	for(i=0;i<n;i++)
	{	
		printf("%d\t",S[i].roll);
		printf("%s\t",S[i].name);
		printf("%d\n",S[i].marks);
	}
}
