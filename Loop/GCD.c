#include<stdio.h>
main()
{
    int i,j,n1,n2,gcd;
    
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&n1,&n2);
    
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0)
        {
            for(j=1;j<=n2;j++)
            {
                if(i==j && n2%j==0)
                {
                    gcd=j;
                }
            }
        }
    }
    printf("The GCD of %d & %d is %d.",n1,n2,gcd);
}