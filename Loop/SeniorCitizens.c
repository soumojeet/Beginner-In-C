#include<stdio.h>
main()
{
	int n,i,age,total_no_senior_citizen = 0;
	printf("Enter Number of Citizens :\n");
	scanf("%d",&n);
    printf("Enter Age :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&age);
		if(age>=60)
			total_no_senior_citizen+=1;
	}
	printf("Total Number of Senior Citizen : %d",total_no_senior_citizen);
}