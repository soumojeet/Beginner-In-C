#include<stdio.h>
main()
{
    int a[100],i,n,s,p=0;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the Element to be Searched : ");
    scanf("%d",&s);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            p=i+1;
            break;
        }
    }
    if(p==0)
    printf("The Element is not Present.");
    else
    printf("The Element is found at %d position.",p);
}