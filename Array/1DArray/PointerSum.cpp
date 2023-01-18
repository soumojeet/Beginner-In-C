#include<stdio.h>
void sum(int*, int*);
main()
{
	int x,y;
	printf("Enter Two Numbers To Add :\n");
	scanf("%d%d",&x,&y);
	sum(&x,&y);
}
void sum(int *x, int *y)
{
	printf("The Sum Of Two Numbers : %d",*x+*y);
}


