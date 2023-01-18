#include<stdio.h>
main()
{
    int i,n,a[100],max,min,pos,sec_min;
    printf("Enter Array Limit :\n");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    pos=0;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i]; 
        if(max<a[i]) 
        max=a[i];
    }
    sec_min=max;
    for(i=0;i<n;i++)
    {
        if(a[i]!=min && a[i]<sec_min)
        {
            sec_min=a[i];
            pos=i;
        }
    }
    printf("The Second Smallest Value & Position : %d & %d",sec_min,pos+1);
}