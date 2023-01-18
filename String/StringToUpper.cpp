#include<stdio.h>
#include"MyString.h"
main()
{
	char s1[100];
	printf("Enter A String : ");
	gets(s1);
	
	mystrtoupper(s1);
	printf("The Uppercase Of The String : %s",s1);
}
