#include<stdio.h>
main()
{
    int x, y, z;
    printf("Enter Three Numbers :\n");
    scanf("%d%d%d",&x,&y,&z);
    
    if(x>y)
    {
        if(x>z)
        printf("%d is largest.",x);
        else
        printf("%d is largest.",z);
    }
    else
    {
        if(y>z)
        printf("%d is largest.",y);
        else
        printf("%d is largest.",z);
    }
}