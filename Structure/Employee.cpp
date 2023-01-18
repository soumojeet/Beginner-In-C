#include<stdio.h>
#include<stdlib.h>
#include"mystring.h"
void record(int);
void salary(int);
void department(int);
void saldept(int);
void highlow(int);
struct employee
{
	int empid;
	char ename[20];
	char job[15];
	float sal;
	int deptid;
}E[20];
main()
{
	int ch,i,n;
	
	printf("Enter Number Of Employee : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Details Of Employee %d :\n",i+1);
		printf("Enter ID : ");
		scanf("%d",&E[i].empid);
		printf("Enter Name : ");
		scanf("%s",E[i].ename);
		printf("Enter Job : ");
		scanf("%s",E[i].job);
		printf("Enter Salary : ");
		scanf("%f",&E[i].sal);
		printf("Enter Department ID : ");
		scanf("%d",&E[i].deptid);
		system("cls");
	} 
	do
	{
		printf("\n-------MENU-------\n");
		printf("1. To Display Employee Record\n2. To Display the Employees Having Salary in a Specific Range\n3. To Display The Names of All Employees Of Specific Department\n4. To Display the Employees in Specific Department & Having Specific Salary\n5. To Display The Highest & Lowest Paid Employee Record\n6. Exit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				record(n);
				break;
			}
			case 2:
			{
				salary(n);
				break;
			}
			case 3:
			{
				department(n);
				break;
			}
			case 4:
			{
				saldept(n);
				break;
			}
			case 5:
			{
				highlow(n);
				break;
			}
			case 6:
			{
				printf("\nBYE\n");
				break;
			}
			default:
			{
				printf("\nInvalid Choice\n");
			}	
		}
	}while(ch!=6);
}
void record(int n)
{
	int i;
	printf("EMPLOYEE ID\tNAME\tDESIGNATION\tSALARY\tDEPARTMENT ID\n");
	for(i=0;i<n;i++)
	printf("%d\t\t%s\t%s\t\t%.2f\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].sal,E[i].deptid);
}
void salary(int n)
{
	int i,min,max;
	printf("\nEnter Lower Range : ");
	scanf("%d",&min);
	printf("Enter Upper Range : ");
	scanf("%d",&max);
	system("cls");
	printf("EMPLOYEE ID\tNAME\tDESIGNATION\tSALARY\tDEPARTMENT ID\n");	
	for(i=0;i<n;i++)
	{
		if(E[i].sal>=min && E[i].sal<=max)
		{
			printf("%d\t%s\t%s\t%.2f\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].sal,E[i].deptid);
		}
	}
}
void department(int n)
{
	char S[15],X[15];
	int i;
	printf("\nEnter Department : ");
	scanf("%s",S);
	for(i=0;i<n;i++)
	{
		mystrcpy(X,E[i].job);
		mystrtolower(S); mystrtolower(X);		
		if(mystrcmp(S,X)==0)
		{
			printf("EMPLOYEE ID\tNAME\tDESIGNATION\tSALARY\tDEPARTMENT ID\n");
			printf("%d\t%s\t%s\t%.2f\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].sal,E[i].deptid);
		}
	}
}
void saldept(int n)
{
	int i,s;
	printf("\nEnter Department ID : ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(E[i].deptid==s && E[i].sal>=10000)
		{
			printf("EMPLOYEE ID\tNAME\tDESIGNATION\tSALARY\tDEPARTMENT ID\n");
			printf("%d\t%s\t%s\t%.2f\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].sal,E[i].deptid);
		}
	}
}
void highlow(int n)
{
	int i,max,min,pos1,pos2;
	max=E[0].sal; pos1=0;
	for(i=1;i<n;i++)
	{
		if(E[i].sal>max)
		pos1=i;
	}
	min=E[0].sal; pos2=0;
	for(i=1;i<n;i++)
	{
		if(E[i].sal<min)
		pos2=i;
	}
	printf("HIGHEST PAID EMPLOYEE\nEMPLOYEE ID\tNAME\tDESIGNATION\tSALARY\tDEPARTMENT ID\n");
	printf("%d\t%s\t%s\t%.2f\t%d\n",E[pos1].empid,E[pos1].ename,E[pos1].job,E[pos1].sal,E[pos1].deptid);
	printf("LOWEST PAID EMPLOYEE\nEMPLOYEE ID\tNAME\tDESIGNATION\tSALARY\tDEPARTMENT ID\n");
	printf("%d\t%s\t%s\t%.2f\t%d\n",E[pos2].empid,E[pos2].ename,E[pos2].job,E[pos2].sal,E[pos2].deptid);
}
