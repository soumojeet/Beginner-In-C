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
	int i,j,n,max,pos;
	
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
		system("cls");
	}
	max=S[0].total;
	pos=0;
	for(i=1;i<n;i++)
	{
		if(S[i].total>max)
		pos=i;
	}
	printf("DETAILS OF THE TOPPER\nROLL\tNAME\tMARKS1\tMARKS2\tMARKS3\tTOTAL\n");
	printf("%d\t%s\t",S[pos].roll,S[pos].name);
	for(j=0;j<3;j++)
	{
		printf("%d\t",S[pos].marks[j]);
	}
	printf("%d\n",S[pos].total);
}

