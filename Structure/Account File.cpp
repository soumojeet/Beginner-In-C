#include<stdio.h>
#include<process.h>
#include<conio.h>
struct cust
{
	int accno;
	int pin;
	char name[10];
	float amt;
}A;
main()
{
	FILE *fp;
	char ch='y';
	
	fp=fopen("C:/Users/Soumyajit/Documents/3rd Semester/C Program/Structure/Acc File.DAT","w");
	fprintf(fp,"Name	Account		PIN		Balance\n");
	while(ch=='y' || ch=='Y')
	{
		printf("\nEnter Name, Account, PIN, Balance\n");
		scanf("%s%d%d%f",A.name,&A.accno,&A.pin,&A.amt);
		fprintf(fp,"%s	%d	%d	%.2f\n",A.name,A.accno,A.pin,A.amt);
		printf("Press 'Y' if you want to add another record");
		ch=getch();
		fflush(stdin);
	}
	fclose(fp);
}
