#include<stdio.h>
main()
{
    int i,j,k,n,a[100];
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(a[i]==a[j] && i!=j)
          {
                for(k=j+1;k<n;k++)
                {
                    a[k-1]=a[k];
                }
                n--;
                j--;
          }     
        }
    }
    printf("The Array after deleting duplicate elements :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}