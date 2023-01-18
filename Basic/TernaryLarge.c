#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the value of a & b\n");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("The Largest = %d",c);
}