#include<stdio.h>
void total_words(char*);
main()
{
	char s[100];
	printf("Enter A String : ");
	gets(s);
	
	total_words(s);
}
void total_words(char *s)
{
	int i=0;
	while(*s!=0)
	{
		if(*s==' ')
		i++;
		s++;
	}
	printf("There Are Total %d Words.",i+1);
}

