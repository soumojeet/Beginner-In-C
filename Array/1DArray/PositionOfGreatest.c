#include<stdio.h>
main()
{
    int i,n,a[100],max,pos;
    printf("Enter Array Limit :\n");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    pos=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i;
        }     
    }
    printf("The Greatest Value & Position : %d & %d",max,pos+1);
}