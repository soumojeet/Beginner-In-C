#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return(f);
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("Factorial is : %d",fact(n));
}