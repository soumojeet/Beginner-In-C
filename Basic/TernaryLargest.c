#include<stdio.h>
main()
{
    int a,b,c,x;
    printf("Enter Three Numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    x=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("The Largest = %d",x);
}