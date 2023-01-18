#include<stdio.h>
main()
{
	  int i,n,even_sum=0;
    printf("Enter Limit:\n");
    scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
        if(i%2==0)
		     even_sum+=i;	
	  }
    printf("The Sum of Even Numbers : %d",even_sum);
}