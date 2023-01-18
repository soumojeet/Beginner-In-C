#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100],s2[100];
	printf("Enter A String : ");
	gets(s1);
	printf("Enter Another String : ");
	gets(s2);
	
	mystrcat(s1,s2);
	printf("The Concated String : %s",s1);
} 
