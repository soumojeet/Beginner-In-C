#include<stdio.h>
main()
{
	int i,d,n;
    printf("Enter the value of Multiplication table : ");
    scanf("%d",&d);
    printf("Enter the limit of the table : ");
    scanf("%d",&n);
    printf("The Multiplication Table :\n");
	  for(i=1;i<=n;i++)
	  {
    printf("%d * %d = %d\n",d,i,d*i);
    }
}