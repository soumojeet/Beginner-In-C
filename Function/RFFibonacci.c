#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2)
    return(1);
    else
    return(fibo(n-1)+fibo(n-2));
}
main()
{
    int i,n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("Fibonacci Series :\n");
    for(i=1;i<=n;i++)
    printf("%d ",fibo(i));
}