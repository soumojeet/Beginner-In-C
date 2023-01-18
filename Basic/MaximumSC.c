#include<stdio.h>
main()
{
    int a,b;
    printf("Enter 2 Numbers\n");
    scanf("%d%d",&a,&b);
    
    switch(a>b)
    {
        case 0:
        printf("%d is maximum.",b);
        break;
        case 1:
        printf("%d is maximum.",a);
    }
}