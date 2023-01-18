#include<stdio.h>
main()
{
    float l,b,peri;
    printf("Enter the length & breath of a rectangle\n");
    scanf("%f%f",&l,&b);
    peri=2*(l+b);
    printf("The perimeter of the rectangle is %f",peri);
}