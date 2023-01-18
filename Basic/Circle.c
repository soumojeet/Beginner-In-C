#include<stdio.h>
#include<math.h>
main()
{
    float r,dia,area,cir;
    printf("Enter the radius of a circle :\n");
    scanf("%f",&r);
    dia=2*r;
    cir=2*3.14*r;
    area=3.14*pow(r,2);
    printf("The radius of the circle is %.2f\n",dia);
    printf("The circumference of the circle is %.2f\n",cir);
    printf("The area of the circle is %.2f\n",area);
}