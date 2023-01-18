#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100];
	int n;
	printf("Enter A String : ");
	gets(s1);
	
	n=mystrlen(s1);
	printf("The Length Of The String : %d.",n);
}
