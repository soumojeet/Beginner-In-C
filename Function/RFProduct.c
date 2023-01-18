#include<stdio.h>
int prod(int x,int y)
{
    if(y==1)
    return(x);
    else
    return(x+prod(x,y-1));
}
main()
{
    int a,b;
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&a,&b);
    printf("The Product : %d",prod(a,b));
}