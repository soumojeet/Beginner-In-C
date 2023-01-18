#include<stdio.h>
#include"mystring.h"
int search(char*,char);
main()
{
	char s[100],key;
	int pos;
	printf("Enter A String : ");
	gets(s);
	printf("Enter The Character To Be Searched : ");\
	scanf("%c",&key);
	mystrtolower(s);
	pos=search(s,key);
	if(pos)
	printf("The First Occurence Of That Character Is At Position %d",pos);
	else
	printf("Not Present.");
}
int search(char *s, char key)
{
	int i=0;
	while(*s!='\0')
	{
		if(key==*s)
		return(i+1);
		s++; i++;
	}
	return(0);
}
