#include<stdio.h>
main()
{
	int i,n,c,p=0;
    printf("Emter the Value of n :\n");
    scanf("%d",&n);
    printf("The Fibonacci Series :\n0 1");
    for(i=1;i<n-2;i++)
        {
        p=c+i;
        c=i;
        printf(" %d ",p);
        }
}