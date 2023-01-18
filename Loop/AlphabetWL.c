#include<stdio.h>
main()
{
    char ch1='A',ch2='a';
    printf("The Uppercase Alphabets are :\n");
    while(ch1<='Z')
    {
        printf("%c ",ch1);
        ch1++;
    }
    printf("\nThe Lowercase Alphabets are :\n");
    while(ch2<='z')
    {
        printf("%c ",ch2);
        ch2++;
    }
    
}