#include<stdio.h>
int reverse(int n,int rev)
{
    if(n==0)
    return(rev);
    else
    {
        int d=n%10;
        rev=rev*10+d;
        reverse(n/10,rev);
    }
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("The Reverse : %d",reverse(n,0));
}