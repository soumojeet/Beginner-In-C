#include<stdio.h>
#include<math.h>
main()
{
    int i,n,a,b,c,d,e,f;
    
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    a=n;
    
    while(a>9)
    {
        d=a%10;
        c++;
        a/=10;
    }
    b=pow(10,c);
    e=n%10;
    f=n%b;
    n=f/10;
    n=(n*10)+a+(e*b);
    
    printf("The Number After Reversing First & Last Digits : %d",n);
}