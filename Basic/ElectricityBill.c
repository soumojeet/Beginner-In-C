#include<stdio.h>
main()
{
    int n;
    float bill,ad_chrg;
    printf("Enter Units : ");
    scanf("%d",&n);
    
    if(n>=0 && n<=50)
    {
        bill=n*0.5;
        ad_chrg=bill*0.2;
        bill+=ad_chrg;
        printf("The Electricity Bill for %d unit : %.3f/-",n,bill);
    }
    else if(n>50 && n<=150)
    {
        bill=25+((n-50)*0.75);
        ad_chrg=bill*0.2;
        bill+=ad_chrg;
        printf("The Electricity Bill for %d unit : %.3f/-",n,bill);
    }
    else if(n>150 && n<=250)
    {
        bill=25+75+((n-150)*1.20);
        ad_chrg=bill*0.2;
        bill+=ad_chrg;
        printf("The Electricity Bill for %d unit : %.3f/-",n,bill);
    }
    else if(n>250)
    {
        bill=25+75+120+((n-250)*1.50);
        ad_chrg=bill*0.2;
        bill+=ad_chrg;
        printf("The Electricity Bill for %d unit : %.3f/-",n,bill);
    }
    else
    printf("Invalid Input");
}