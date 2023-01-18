#include<stdio.h>
main()
{
    int n,y,w;
    printf("Enter number of days :\n");
    scanf("%d",&n);
    
    y=n/365;
    n=n%365;
    w=n/7;
    n=n%7;
    printf("Years = %d  Weeks = %d Days = %d",y,w,n);
}