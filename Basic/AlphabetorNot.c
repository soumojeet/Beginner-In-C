#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if((ch>64 && ch<91) || (ch>96 && ch<123))
		printf("The entered character is an Alphabet");
	else
		printf("The entered character is not an Alphabet");
}