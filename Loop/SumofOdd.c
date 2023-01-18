#include<stdio.h>
main()
{
	  int i,n,odd_sum=0;
    printf("Enter Limit : ");
    scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
        if(i%2!=0)
		     odd_sum+=i;	
	  }
    printf("The Sum of Odd Numbers : %d",odd_sum);
}