#include<stdio.h>
main()
{
    int i,j,k,rn,cn,h,a[100][100][100];
    
    printf("Enter Row Limit : ");
    scanf("%d",&rn);
    printf("Enter Column Limit : ");
    scanf("%d",&cn);
    printf("Enter Height Limit : ");
    scanf("%d",&h);
    printf("Enter Array Elements :\n");
    for(i=0;i<h;i++)
        for(j=0;j<rn;j++)
            for(k=0;k<cn;k++)
                scanf("%d",&a[i][j][k]);
    printf("The Entered Array :\n");
    for(i=0;i<h;i++)
    {
        for(j=0;j<rn;j++)
        {
            for(k=0;k<cn;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
        printf("\n");
        }
        printf("\n");
    }
}