#include<stdio.h>
int sum_of_digits(int n)
{
    if(n<9)
    return(n);
    else
    return(n%10+sum_of_digits(n/10));
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("The Sum Of Digits : %d",sum_of_digits(n));
}