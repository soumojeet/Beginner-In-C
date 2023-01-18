#include<stdio.h>
main()
{
	int i,n;
    printf("Enter Limit: ");
    scanf("%d",&n);
    printf("The Natural Numbers from %d to 1 :\n",n);
	  for(i=n;i>=1;i--)
	  {
		 printf("%d\n",i);	
	  }
}