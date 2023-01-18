#include<stdio.h>
#include<math.h>
int power(int n,int m)
{
    int r;
    r=pow(n,m);
    return(r);
}
main()
{
    int n,m;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("Enter Power : ");
    scanf("%d",&m);
    printf("The Power %d to %d : %d",n,m,power(n,m));
}