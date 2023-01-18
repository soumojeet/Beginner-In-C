#include<stdio.h>
main()
{
    int a,b;
    printf("Enter The value of a & b\n");
    scanf("%d%d",&a,&b);
    
    printf("The Value of a is %d & b is %d before swapping\n",a,b);
   
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("The Value of a is %d & b is %d after swapping",a,b);
}