#include<stdio.h>
main()
{
	int i,n;
	printf("Enter A Number : ");
	scanf("%d",&n);
	printf("The factors are :\n");
    for(i=1;i<=n;i++)
        {
        if(n%i==0)
            printf("%d\t",i);
        }
	
}