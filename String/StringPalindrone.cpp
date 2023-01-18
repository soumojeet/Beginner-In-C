#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100],s2[100];
	int i,j;
	i=0;
	printf("Enter A String : ");
	gets(s1);
	
	mystrcpy(s2,s1); mystrrev(s1);
	
	if(mystrcmp(s1,s2))
	printf("Not A Palindrone String.");
	else
	printf("Palindrone String.");
}
