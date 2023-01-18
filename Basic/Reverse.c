#include<stdio.h>
main()
{
    int d, x, y, z, rev;
    printf("Enter a 3 digit number\n");
    scanf("%d",&d);
    x=d%10;
    d=d/10;
    y=d%10;
    d=d/10;
    z=d%10;
    rev=(100*x)+(10*y)+z;
    printf("The Digit are : %d,%d,%d\n",z,y,x);
    printf("The Reverse of the Number : %d",rev);
}