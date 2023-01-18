#include<stdio.h>
#include<math.h>
main()
{
	int i,n,p,k,d,f,x,y;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("The Armstrong Number between 1 - %d :\n",n);
    for(i=1;i<=n;i++)
    {
        d=i;
        k=i;
        y=0; 
        f=0;
    for(;k>0;)
        {
           x=k%10;
           y+=1; 
           k/=10;
        }
    for(;d>0;)
        {
        p=d%10;
        f+=pow(p,y);
        d/=10;
        }
         if(f==i)
         printf("%d\n",i);
    }
}
