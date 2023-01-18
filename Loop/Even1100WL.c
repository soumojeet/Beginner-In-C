#include<stdio.h>
main()
{
    int i=0;
    printf("The Even Numbers between 1-100 :\n");
    while(i<=100)
    {
        if(i%2==0)
        printf("%d ",i);
        i++;
    }   
}