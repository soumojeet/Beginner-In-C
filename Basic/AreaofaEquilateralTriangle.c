#include<stdio.h>
#include<math.h>
main()
{
    float a,area;
    printf("Enter the side of a triangle :\n");
    scanf("%f",&a);
    area=(sqrt(3)/4)*pow(a,2);
    printf("The area of the triangle is %.2f",area);
}