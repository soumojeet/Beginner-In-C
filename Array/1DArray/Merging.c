#include<stdio.h>
main()
{
    int A[100],B[100],C[200],i,j,n,m;
    printf("Enter Limit of A array: ");
    scanf("%d",&n);
    printf("Enter Limit of B array: ");
    scanf("%d",&m);
    
    printf("Enter Elements of A array :\n");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    printf("Enter Elements of B array :\n");
    for(i=0;i<m;i++)
    scanf("%d",&B[i]);
    
    for(i=0;i<n;i++)
    {
        C[i]=A[i];
    }
    for(j=0;j<m;j++)
    {
        C[i]=B[j];
        i++;
    }
    
    printf("The Merged Array :\n");
    for(i=0;i<n+m;i++)
    printf("%d\t",C[i]);
}