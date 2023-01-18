#include<stdio.h>
main()
{
    int i,n,a[100],b[100];
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    b[i]=a[i]; 
    printf("The Copied Array :\n");
    
    for(i=0;i<n;i++)
    printf("%d\t",b[i]);
}