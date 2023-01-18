#include<stdio.h>
#include<math.h>
int counting(int n)
{
    int f=0;
    while(n>9)
    {
        f++;
        n/=10;
    }
    return(f);
}
int reverse(int n,int f)
{
    if(n<10)
    return(n);
    else
    return((n%10)*pow(10,f)+reverse(n/10,--f));
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    printf("The Reverse : %d",reverse(n,counting(n)));
}