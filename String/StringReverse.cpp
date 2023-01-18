#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100];
	printf("Enter A String : ");
	gets(s1);
	
	mystrrev(s1);
	printf("The Reversed String : %s",s1);
}
