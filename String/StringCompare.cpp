#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100],s2[100];
	int res;
	printf("Enter A String : ");
	gets(s1);
	printf("Enter Another String : ");
	gets(s2);
	
	res=mystrcmp(s1,s2);
	printf("The Result : %d.",res);
}
