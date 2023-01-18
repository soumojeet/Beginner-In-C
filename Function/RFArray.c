#include<stdio.h>
void input(int a[],int n,int i)
{
    if(i<n)
    {
        scanf("%d",&a[i]);
        input(a,n,++i);
    }
}
void show(int a[],int n,int i)
{
    if(i<n)
    {
        printf("%d ",a[i]);
        show(a,n,++i);
    }
}
main()
{
    int a[100],n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    input(a,n,0);
    printf("The Entered Array :\n");
    show(a,n,0);
}