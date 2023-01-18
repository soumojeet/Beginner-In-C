#include<stdio.h>
int i=1;
void natural(int n)
{
    if(i<=n)
    {
        printf("%d ",i++);
        natural(n);
    }
}
main()
{
    int n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("The Natural Numbers :\n");
    natural(n);
}