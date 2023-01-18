#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three sides of a triangle :\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a+b>c && b+c>a && a+c>b)
        {
        if(a==b && b==c)
        printf("Equilateral Triangle.");
        else if(a!=b && b!=c && c!=a)
        printf("Scalene Triangle.");
        else if((a==b && a!=c)||(a==c && a!=b)||(b==c && b!=a))
        printf("Isosceles Triangle.");
        }
    else
    printf("Triangle not Possible.");
    
}