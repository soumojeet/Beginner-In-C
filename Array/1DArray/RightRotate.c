#include<stdio.h>
main()
{
    int a[100],i,j,n,t,rn;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("Enter No. of Rotation : ");
    scanf("%d",&rn);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(j=1;j<=rn;j++)
    {
        t=a[n-1];
        
        for(i=n-1;i>=0;i--)
        a[i]=a[i-1];
        
        a[0]=t;
    }
    printf("The Array after rotating right %d times :\n",rn);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}