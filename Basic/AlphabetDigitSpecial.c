#include<stdio.h>
main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if((ch>64 && ch<91) || (ch>96 && ch<123))
    printf("Alphabet");
    else if(ch>47 && ch<58)
    printf("Digit");
    else
    printf("Special Character");
}