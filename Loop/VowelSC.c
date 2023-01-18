#include<stdio.h>
main()
{
	char ch;
	printf("Enter An Alphabet : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("Vowel");
			break;
		default:
			printf("Consonent");
	}
}