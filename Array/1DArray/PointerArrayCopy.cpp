#include<stdio.h>
#include<stdlib.h>
main()
{
	int *A,*B,i,n,*t;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	B=(int*)malloc(n*sizeof(int));
	t=B;
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",A);
		B=A;
		A++; B++;
	}
	B=t;
	printf("The Array :\n");
	for(i=0;i<n;i++)
	printf("%d  ",*B++);
}
