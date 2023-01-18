#include<stdio.h>
main()
{
    long int cm,m,km;
    printf("Enter the length in Centimeter :\n");
    scanf("%d",&cm);
    m=cm/100;
    cm=cm%100;
    km=m/1000;
    m=m%1000;
    printf("The Converted length is %d KM %d M %d CM.",km,m,cm);
}