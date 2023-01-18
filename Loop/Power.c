#include<stdio.h>
#include<math.h>
main()
{
	int i,n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printf("The Power of 1 to n (n times) :\n");
    for(i=1;i<=n;i++)
        {
        printf("%.1f\n",pow(i,n));
    }
    printf("The Power of n (1 to n times) :\n");
    for(i=1;i<=n;i++)
        {
        printf("%.1f\n",pow(n,i));
    }
}