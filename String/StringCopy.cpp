#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100],s2[100];
	printf("Enter A String : ");
	gets(s1);
	
	mystrcpy(s2,s1);
	printf("The Copied String : %s",s2);
}
