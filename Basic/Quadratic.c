#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,f,x1,x2;
    printf("Enter coeffecients of quadratic equation :\n");
    scanf("%f%f%f",&a,&b,&c);
    f=pow(b,2)-(4*a*c);
    printf("The Discriminant is %.2f\n",f);
    if(f>0)
    {
        x1=(-b+sqrt(f))/(2*a);
        x2=(-b-sqrt(f))/(2*a);
    }
    else if(f==0)
        x1=x2=-b/(2*a);
    else
    {
       x1=(-b+sqrt(-f))/(2*a);
       x2=(-b-sqrt(-f))/(2*a);
    }
    printf("The Roots of the Quadratic Equation are %.2f & %.2f",x1,x2);
}