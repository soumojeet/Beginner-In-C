#include<stdio.h>
main()
{
    int i,n,a[100],max,min,pos1,pos2;
    printf("Enter Array Limit : ");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    pos1=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos1=i;
        }     
    }
    min=a[0];
    pos2=0;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            pos2=i;
        }     
    }
    printf("The Smallest Value & Position : %d & %d\n",min,pos2+1);
    printf("The Greatest Value & Position : %d & %d",max,pos1+1);
}