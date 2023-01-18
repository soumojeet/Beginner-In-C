#include<stdio.h>
main()
{
    float ferh, cel;
    printf("Enter the value in Ferhenheit\n");
    scanf("%f",&ferh);
    cel=(5*ferh-160)/9;
    printf("The value in Celcius is %f",cel);
}