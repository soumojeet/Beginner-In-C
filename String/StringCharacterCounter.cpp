#include<stdio.h>
#include"mystring.h"
int count(char*,char);
main()
{
	char s[100],key;
	printf("Enter A String : ");
	gets(s);
	printf("Enter The Lowercase Character To Be Count : ");
	scanf("%c",&key);
	mystrtolower(s);
	printf("The Occurence Of That Character Is %d Times.",count(s,key));
}
int count(char *s, char key)
{
	int i=0;
	while(*s!='\0')
	{
		if(key==*s)
		i++;
		s++;
	}
	return(i);
}
