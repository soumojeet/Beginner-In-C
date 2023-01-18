#include<stdio.h>
#include<stdlib.h>
main()
{
	int *A,i,n,*t;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	t=A;
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",A++);
	A=t;
	printf("The Array :\n");
	for(i=0;i<n;i++)
	printf("%d  ",*A++);
}
