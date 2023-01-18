#include<stdio.h>
void dasc(char*);
main()
{
	char s[100];
	printf("Enter A String : ");
	gets(s);
	
	dasc(s);
}
void dasc(char *s)
{
	int d,a,sc;
	d=a=sc=0;
	while(*s!='\0')
	{
		if((*s>64 && *s<91) || (*s>96 && *s<123))
		a++;
		else if(*s>47 && *s<58)
		d++;
		else
		sc++;
		
		s++;
	}
	
	printf("This String Contains %d No. Of Alphabets.\n",a);
	printf("This String Contains %d No. Of Digits.\n",d);
	printf("This String Contains %d No. Of Special Characters.",sc);
}
