#include<stdio.h>
main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>64 && ch<91)
    printf("Uppercase Alphabet");
    else if(ch>96 && ch<123)
    printf("Lowercase Alphabet");
    else
    printf("Invalid Character");
    
}