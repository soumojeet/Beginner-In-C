#include<stdio.h>
main()
{
	int i;
    printf("The ASCII value of UpperCase Alphabets\n");
    for(i='A';i<='Z';i++)
    {
    printf("%c is %d\n",i,i);	
    }
    printf("The ASCII value of LowerCase Alphabets\n");
    for(i='a';i<='z';i++)
    {
    printf("%c is %d\n",i,i);	
    }
}