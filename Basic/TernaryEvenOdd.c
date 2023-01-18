#include<stdio.h>
main()
{
    int n,x;
    printf("Enter a number : ");
    scanf("%d",&n); 
    
    x=n%2?1:0;

    if(x==1)
    printf("Odd");
    else
    printf("Even");  
}