#include<stdio.h>
main()
{
    int a1,a2;
    printf("Enter the angle :\n");
    scanf("%d%d",&a1,&a2);
    printf("The Third Angle : %d",180-(a1+a2));
}