#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[25];
	int marks[3];
	int total;
};
main()
{
	struct student S[10];
	int i,j,n;
	
	printf("Enter Number Of Students : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Roll Of Student %d : ",i+1);
		scanf("%d",&S[i].roll);
		printf("Enter Name Of Student %d : ",i+1);
		scanf("%s",S[i].name);
		S[i].total=0;
		for(j=0;j<3;j++)
		{
			printf("Enter Marks %d : ",j+1);
			scanf("%d",&S[i].marks[j]);
			S[i].total+=S[i].marks[j];
		}
	}
	system("cls");
	printf("ROLL\tNAME\tMARKS1\tMARKS2\tMARKS3\tTOTAL\n");
	for(i=0;i<n;i++)
	{	
		printf("%d\t",S[i].roll);
		printf("%s\t",S[i].name);
		for(j=0;j<3;j++)
		{
			printf("%d\t",S[i].marks[j]);
		}
		printf("%d\n",S[i].total);
	}
}
