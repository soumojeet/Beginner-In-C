#include<stdio.h>
#include<stdlib.h>
void deposite(int);
void withdraw(int);
void check(int);
void change(int);
struct cust
{
	int accno;
	int pin;
	char name[20];
	float amt;
}A[10];
main()
{
	int ch,i,n,flag,key_acc,key_pin;
	flag=-1;
	printf("Enter Number Of Account : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Details Of Customer %d :\n",i+1);
		printf("Enter Account Number : ");
		scanf("%d",&A[i].accno);
		printf("Enter Pin Number : ");
		scanf("%d",&A[i].pin);
		printf("Enter Name : ");
		scanf("%s",A[i].name);
		printf("Enter Amount : ");
		scanf("%f",&A[i].amt);
		system("cls");
	}
	do
	{
		printf("-------------------\n");
		printf("WELCOME TO ATM");
		printf("\n-------------------\n");
		printf("\nEnter Your Account Number : ");
		scanf("%d",&key_acc);
		for(i=0;i<n;i++)
		{
			if(key_acc==A[i].accno)
			{
				printf("Enter Your PIN : ");
				scanf("%d",&key_pin);
				if(key_pin==A[i].pin)
				flag=i;
				break;
			}
		}
		system("cls");
		switch(flag)
		{
			case -1:
			printf("Invalid Account or Password\n");
			break;
			default:
			do
			{
				printf("\n-------MENU-------\n");
				printf("1. Deposite An Amount\n2. Withdraw An Amount\n3. Check Balance\n4. Change PIN\n5. Exit\n");
				printf("Enter Your Choice : ");
				scanf("%d",&ch);
				
				switch(ch)
				{
					case 1:
					{
						deposite(flag);
						break;
					}
					case 2:
					{
						withdraw(flag);
						break;
					}
					case 3:
					{
						check(flag);
						break;
					}
					case 4:
					{
						change(flag);
						flag=-1;
						system("cls");
						printf("\nPIN Changed Successfully\nRe-Enter To Login\n");
						break;
					}
					case 5:
					{
						printf("\nBYE\n");
						break;
					}
					default:
					{
						printf("\nInvalid Choice\n");
					}
				}
			}while(ch!=5 && ch!=4);		
		}
	}while(flag==-1);
}
void deposite(int pos)
{
	float n;
	printf("\nEnter The Amount To Be Deposited : ");
	scanf("%f",&n);
	A[pos].amt+=n;
	printf("Amount Deposited\n");
}
void withdraw(int pos)
{
	float n;
	printf("\nEnter The Amount To Be Withdrawn : ");
	scanf("%f",&n);
	A[pos].amt-=n;
	printf("Amount Withdrawn\n");
}
void check(int pos)
{
	printf("\nAccount\tName\tBalance\n");
	printf("%d\t%s\t%f\n",A[pos].accno,A[pos].name,A[pos].amt);
}
void change(int pos)
{
	printf("\nEnter The New Pin : ");
	scanf("%d",&A[pos].pin);
}
