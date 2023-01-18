#include<stdio.h>
int pow(int x,int y)
{
    if(y==1)
    return(x);
    else
    return(x*pow(x,y-1));
}
main()
{
    int a,b;
    printf("Enter A Number : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    printf("The Power %d to %d : %d",a,b,pow(a,b));
}