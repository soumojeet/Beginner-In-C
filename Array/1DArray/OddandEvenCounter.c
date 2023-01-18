#include<stdio.h>
main()
{
    int a[100],i,n,even=0,odd=0;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total Number of Even : %d\n",even);
    printf("Total Number of Odd : %d",odd);
}