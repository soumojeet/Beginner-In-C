#include<stdio.h>
#include<math.h>
int cube(int n,int m)
{
    int r;
    r=pow(n,m);
    return(r);
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("The Cube of %d : %d",n,cube(n,3));
}