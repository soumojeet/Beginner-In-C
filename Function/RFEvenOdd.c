#include<stdio.h>
int i=1; int j=1;
void even(int n)
{
    if(i%2==0)
    {
        printf("%d ",i++);
        even(n);
    }
    else if(i<=n)
    {
        i++;
        even(n);
    }
}
void odd(int n)
{
    if(j%2==1)
    {
        printf("%d ",j++);
        odd(n);
    }
    else if(j<=n)
    {
        j++;
        odd(n);
    }
}
main()
{
    int n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("The Even Numbers :\n");
        even(n);
        printf("\nThe Odd Numbers :\n");
        odd(n-1);
    }
    else
    {
        printf("The Even Numbers :\n");
        even(n-1);
        printf("\nThe Odd Numbers :\n");
        odd(n);
    }
}