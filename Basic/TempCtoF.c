#include<stdio.h>
main()
{
    float cel, ferh;
    printf("Enter the temperature in Celcius\n");
    scanf("%f",&cel);
    ferh=(9*cel+160)/5;
    printf("The value in Ferenheit is %f",ferh);
}
