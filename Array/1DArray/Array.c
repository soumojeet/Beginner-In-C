#include<stdio.h>
main()
{
    int i,n,a[100];
    printf("Enter Array Limit :\n");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The Array :\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}