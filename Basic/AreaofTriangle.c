#include<stdio.h>
main()
{
    float b,h,area;
    printf("Enter the base and height of the triangle :\n");
    scanf("%f%f",&b,&h);
    area=0.5*(b*h);
    printf("The area of the triangle is %.2f",area);
}