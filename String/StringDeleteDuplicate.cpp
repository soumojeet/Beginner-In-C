#include<stdio.h>
#include"mystring.h"
void duplicate(char*);
main()
{
    char s[50];
    printf("Enter A String : ");
    gets(s);
    printf("The String before deleting duplicate elements : %s",s);
    duplicate(s);
    printf("\nThe String after deleting duplicate elements : %s",s);
}
void duplicate(char *s)
{
	char *i,*j,*k;
	while(*s!='\0')
	{
		j=s; k=s+1;
		mystrtolower(j); mystrtolower(k);
		if(*j==*k)
		{
			for(i=s+1;*i!='\0';i++)
			{
				*(i)=*(i+1);
			}
			s--;
		}
		s++;
	}
}
