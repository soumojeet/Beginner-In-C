#include<stdio.h>
main()
{
    int s1,s2,s3;
    printf("Enter Three Sides of a Triangle :\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    
    if(s1+s2>s3&&s2+s3>s1&&s1+s3>s2)
    printf("Valid Triangle");
    else 
    printf("Not a Valid Triangle");
}