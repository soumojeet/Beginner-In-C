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
	struct
	{
		int basic;
		int hra;
		int da;
		int city;
	}S;
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
		printf("Enter Basic Salary : ");
		scanf("%d",&E[i].S.basic);
		printf("Enter HRA : ");
		scanf("%d",&E[i].S.hra);
		printf("Enter DA : ");
		scanf("%d",&E[i].S.da);
		printf("Enter City : ");
		scanf("%d",&E[i].S.city);
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
	printf("EMPLOYEE ID\tNAME\t\tDESIGNATION\t\tSALARY\t\t\tDEPARTMENT ID\n\t\t\t\t\t\tBasic  HRA  DA     City\n");
	for(i=0;i<n;i++)
	printf("%d\t\t%s\t%s\t\t%d %d %d %d\t\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].S.basic,E[i].S.hra,E[i].S.da,E[i].S.city,E[i].deptid);
}
void salary(int n)
{
	int i,min,max;
	printf("\nEnter Lower Range : ");
	scanf("%d",&min);
	printf("Enter Upper Range : ");
	scanf("%d",&max);
	system("cls");
	printf("EMPLOYEE ID\tNAME\tDESIGNATION\t\tSALARY\t\t\tDEPARTMENT ID\n\t\t\t\t\tBasic HRA DA City\n");	
	for(i=0;i<n;i++)
	{
		if(E[i].S.basic>=min && E[i].S.basic<=max)
		{
			printf("%d\t\t%s\t%s\t\t %d %d %d %d\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].S.basic,E[i].S.hra,E[i].S.da,E[i].S.city,E[i].deptid);
		}
	}
}
void department(int n)
{
	char Y[15],X[15];
	int i;
	printf("\nEnter Department : ");
	scanf("%s",Y);
	for(i=0;i<n;i++)
	{
		mystrcpy(X,E[i].job);
		mystrtolower(Y); mystrtolower(X);		
		if(mystrcmp(Y,X)==0)
		{
			printf("EMPLOYEE ID\tNAME\tDESIGNATION\t\tSALARY\t\t\tDEPARTMENT ID\n\t\t\t\t\tBasic HRA DA City\n");
			printf("%d\t\t%s\t%s\t\t %d %d %d %d\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].S.basic,E[i].S.hra,E[i].S.da,E[i].S.city,E[i].deptid);
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
		if(E[i].deptid==s && E[i].S.basic>=10000)
		{
			printf("EMPLOYEE ID\tNAME\tDESIGNATION\t\tSALARY\t\t\tDEPARTMENT ID\n\t\t\t\t\tBasic HRA DA City\n");
			printf("%d\t\t%s\t%s\t\t %d %d %d %d\t%d\n",E[i].empid,E[i].ename,E[i].job,E[i].S.basic,E[i].S.hra,E[i].S.da,E[i].S.city,E[i].deptid);
		}
	}
}
void highlow(int n)
{
	int i,max,min,pos1,pos2;
	max=E[0].S.basic; pos1=0;
	for(i=1;i<n;i++)
	{
		if(E[i].S.basic>max)
		pos1=i;
	}
	min=E[0].S.basic; pos2=0;
	for(i=1;i<n;i++)
	{
		if(E[i].S.basic<min)
		pos2=i;
	}
	printf("EMPLOYEE ID\tNAME\tDESIGNATION\t\tSALARY\t\t\tDEPARTMENT ID\n\t\t\t\t\tBasic HRA DA City\n");
	printf("%d\t\t%s\t%s\t\t %d %d %d %d\t%d\n",E[pos1].empid,E[pos1].ename,E[pos1].job,E[pos1].S.basic,E[pos1].S.hra,E[pos1].S.da,E[pos1].S.city,E[pos1].deptid);
	printf("EMPLOYEE ID\tNAME\tDESIGNATION\t\tSALARY\t\t\tDEPARTMENT ID\n\t\t\t\t\tBasic HRA DA City\n");
	printf("%d\t\t%s\t%s\t\t %d %d %d %d\t%d\n",E[pos2].empid,E[pos2].ename,E[pos2].job,E[pos2].S.basic,E[pos2].S.hra,E[pos2].S.da,E[pos2].S.city,E[pos2].deptid);
}
