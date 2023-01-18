#include<stdio.h>
main()
{
	int i,n,sum=0;
    printf("Enter Limit : ");
    scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
		 sum+=i;	
	  }
    printf("The Sum : %d",sum);
}