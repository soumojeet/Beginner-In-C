#include<stdio.h>
main()
{
    int i,j,a[10][10],b[10][10],c[10][10],rn,cn;
    
    printf("Enter Rows Limit : ");
    scanf("%d",&rn);
    
    printf("Enter Columns Limit : ");
    scanf("%d",&cn);
    
    printf("Enter Array Elements of A Array:\n");
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Array Elements of B Array:\n");
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    
    printf("The Addition Array :\n");
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
