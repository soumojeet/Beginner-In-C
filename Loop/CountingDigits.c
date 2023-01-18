#include<stdio.h>
main()
{
    int n,c=0;
    
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    do
    {
        c++;
        n/=10;
    }while(n>0);
    
    printf("The Number of Digits : %d",c);
    
}