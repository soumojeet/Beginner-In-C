#include<stdio.h>
#include<stdlib.h>
#include"MyString.h"
struct contact
{
	char fname[15],lname[15],email[50],state[20],city[20];
	long int ph,pin;
}*A;
main()
{
	int i,n;
	printf("Enter Number Of Contacts : ");
	scanf("%d",&n);
	A=(struct contact*)malloc(n*(sizeof(struct contact)));
	
	for(i=0;i<n;i++)
	{
		printf("Enter First Name : ");
		gets(A[i].fname);
		printf("Enter Last Name : ");
		gets(A[i].lname);
		printf("Enter Phone Number : ");
		scanf("%li",&A[i].ph);
		printf("Enter Email : ");
		gets(A[i].email);
		printf("Enter State Name : ");
		gets(A[i].state);
		printf("Enter City Name : ");
		gets(A[i].city);
		printf("Enter Pin : ");
		scanf("%li",&A[i].pin);
	}
}
