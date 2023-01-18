#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100];
	printf("Enter A String : ");
	gets(s1);
	
	mystrtolower(s1);
	printf("The Lowercase Of The String : %s",s1);
}
