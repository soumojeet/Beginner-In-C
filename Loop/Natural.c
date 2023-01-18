#include<stdio.h>
main()
{
	int i,n;
    printf("Enter Limit: ");
    scanf("%d",&n);
    printf("The Natural Numbers from 1 to %d :\n",n);
	  for(i=1;i<=n;i++)
	  {
		 printf("%d\n",i);	
	  }
}