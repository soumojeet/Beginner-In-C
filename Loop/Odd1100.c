#include<stdio.h>
main()
{
	int i;
    printf("The Odd Numbers from 1 to 100 :\n");
	  for(i=1;i<=100;i++)
	  {
        if(i%2!=0)
        printf("%d\n",i);	
	  }
}