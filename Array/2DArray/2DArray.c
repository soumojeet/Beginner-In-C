#include<stdio.h>
main()
{
    int i,j,rn,cn,a[100][100];
    
    printf("Enter Rows Limit : ");
    scanf("%d",&rn);
    
    printf("Enter Columns Limit : ");
    scanf("%d",&cn);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The 2D Array :\n");
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}