#include<stdio.h>
main()
{
    int i,n,a[100],min,pos;
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
        {
            min=a[i];
            pos=i;
        }     
    }
    printf("The Smallest Value & Position : %d & %d",min,pos+1);
}