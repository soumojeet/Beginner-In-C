#include<stdio.h>
#include<math.h>

void prft(int n)
{
	int j,s=0;
	for(j=1;j<n;j++)
	{
		if((n%j)==0)
		{
  			s=s+j;
  		}
  	}
	if(s==n)
	{
		printf("Perfect Number\n");
	}	
	else
	{
 		printf("Not Perfect Number\n");
	}
}

void prm(int n)
{
int i,f=0;
for(i=2;i<=n/2;i++)
{
	if(n%i==0)
    {
        f++;
        break;
    }
}
    if(f==0)
    printf("Prime\n");
    else
    printf("Not Prime\n");
}

void arm(int n)
{
	int s=0,r,t,nod=0;
	t=n;
	while(n>0)
	{
		nod++;
		n/=10;
	}
	n=t;
	while(n>0)
	{
		r=n%10;
		s=s+pow(r,nod);
		n=n/10;
	}
	if(s==t)
		printf("Armstrong\n");
	else
		printf("Not Armstrong\n");
}
  
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("The Number is :\n");
	prft(num);
	prm(num);
	arm(num);
}