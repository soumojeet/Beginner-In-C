#include<stdio.h>
int palindrome(int n,int rev)
{
    if(n==0)
    return(rev);
    else
    {
        int d=n%10;
        rev=rev*10+d;
        palindrome(n/10,rev);
    }
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if(palindrome(n,0)==n)
    printf("Palindrome Number");
    else
    printf("Not A Palindrome Number");
}