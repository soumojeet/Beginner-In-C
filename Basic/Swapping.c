#include<stdio.h>
main()
{
    int a, b, c;
    printf("Enter the value of 'a' & 'b'\n");
    scanf("%d%d",&a,&b);
    printf("The Value of a is %d & b is %d before swapping\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The Value of a is %d & b is %d after swapping",a,b);
}