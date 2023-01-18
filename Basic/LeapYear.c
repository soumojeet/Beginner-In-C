#include<stdio.h>
main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%400==0)
    printf("Leap Year and Century Year");
    else if(year%100==0)
    printf("Century Year");
    else if(year%4==0)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
}