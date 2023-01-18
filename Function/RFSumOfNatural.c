#include<stdio.h>
int sum(int n)
{
    if(n==1)
    return(1);
    else
    return(n+sum(n-1));
}
main()
{
    int n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("The Sum : %d",sum(n));
}