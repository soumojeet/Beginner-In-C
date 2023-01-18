#include<stdio.h>

int sum(int m,int n)
{
   int d;
   d=m+n; 
   return d;
}
int sub(int m,int n)
{
   int d;
   d=m-n; 
   return d;
}
int mult(int m,int n)
{
   int d;
   d=m*n; 
   return d;
}
int div(int m,int n)
{
   int d;
   d=m/n; 
   return d;
}

main()
{
	int a,b,c,ch;
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	do
	{
		printf("\n--MENU--\n");
		printf("1. Add\n");
		printf("2. Sub\n");
		printf("3. Mult\n");
		printf("4. Div\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					c=sum(a,b);
					break;
			case 2:
					c=sub(a,b);
					break;
			case 3:
					c=mult(a,b);
					break;
			case 4:
				 c=div(a,b);
					break;
			case 5:
					printf("\nHave a nice day");
					ch=0;
					break;
			default:
					printf("\nInvalid choice\n");
		}
		printf("\nResult: %d\n",c);
	}while(ch);
}