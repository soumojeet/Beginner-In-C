#include<stdio.h>
main()
{
    int a[100],e[100],o[100],i,n,even=0,odd=0;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[even]=a[i];
            even++;
        }
        else
        {
            o[odd]=a[i];
            odd++;
        }
    }
    printf("Even Numbers Array :\n");
    for(i=0;i<even;i++)
    printf("%d\t",e[i]);
    printf("\nOdd Numbers Array :\n");
    for(i=0;i<odd;i++)
    printf("%d\t",o[i]);
}