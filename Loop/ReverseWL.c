#include<stdio.h>
main()
{
    int n;
    printf("Enter Limit: ");
    scanf("%d",&n);
    printf("The Natural Elements in Reverse :\n");
    while(n>0)
    {
        printf("%d\t",n);
        n--;
    }
}