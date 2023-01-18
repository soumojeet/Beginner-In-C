#include<stdio.h>
#include<math.h>
main()
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    printf("The Output : %.2f",pow(x,y));
}