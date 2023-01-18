#include<stdio.h>
int maxmin(int m,int n)
{
    if(m>n)
    return(m);
    else
    return(n);
}
main()
{
    int n,m;
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&n,&m);
    printf("The Maximum : %d",maxmin(m,n));
}