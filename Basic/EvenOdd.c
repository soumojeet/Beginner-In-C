#include<stdio.h>
main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n%2!=0)
	printf("Odd");
    else if(n==0)
    printf("Zero");
    else
    printf("Even");
}



