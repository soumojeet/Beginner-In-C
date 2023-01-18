#include<stdio.h>
void swap(int*, int*);
main()
{
	int x,y;
	printf("Enter Two Numbers To Swap :\n");
	scanf("%d%d",&x,&y);
	printf("The Two Numbers Before Swapping : %d & %d",x,y);
	swap(&x,&y);
	printf("\nThe Two Numbers After Swapping : %d & %d",x,y);
}
void swap(int *x, int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}


