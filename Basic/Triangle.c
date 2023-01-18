#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the value of 3 angles of a triangle :\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if((a+b+c)==180 && a!=0 && b!=0 && c!=0)
    printf("Its a triangle.");
    else
    printf("Not a triangle.");
}