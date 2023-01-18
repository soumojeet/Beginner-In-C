#include<stdio.h>
main()
{
    int i,j,n,m,c,d,k,l,g=0,h=0,a[100],b[100],e[100],f[100];
    
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        c=l=0;
        m=a[i];
        while(a[i]>0)
        {
            b[c]=a[i]%10;
            c++;
            a[i]/=10;
        }
        for(j=0;j<c;j++)
        {
            for(k=j+1;k<c;k++)
            {
                if(b[j]==b[k])
                l++;  
            }
        }
        if(l==0)
        {
            e[g]=m;
            g++;
        }
        else
        {
            f[h]=m;
            h++;
        }
    }
    printf("Unique Numbers in Array :\n");
    for(i=0;i<g;i++)
    printf("%d\t",e[i]);
    printf("\nNon Unique Numbers in Array :\n");
    for(i=0;i<h;i++)
    printf("%d\t",f[i]);
}