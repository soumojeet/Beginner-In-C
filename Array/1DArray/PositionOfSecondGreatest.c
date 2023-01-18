#include<stdio.h>
main()
{
    int i,n,a[100],max,pos,sec_max;
    printf("Enter Array Limit :\n");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    sec_max=a[0];
    pos=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }     
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=max && sec_max<a[i])
        {
            sec_max=a[i];
            pos=i;
        }
    }
    printf("The Second Greatest Value & Position : %d & %d",sec_max,pos+1);
}