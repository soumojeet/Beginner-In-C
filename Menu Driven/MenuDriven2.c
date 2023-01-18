#include<stdio.h>
#include<math.h>
int counting(int n)  //For Counting Number of Digits
{
    int f=0;
    while(n!=0)
    {
        f++;
        n/=10;
    }
    return(f);
}
int armstrong(int n,int f)  //Armstrong Function
{
    if(n<10)
    return(pow(n,f));
    else
    return(pow(n%10,f)+armstrong(n/10,f));
}
int prime(int n)  //Prime Function
{
    int i,f=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    return(f);
}
int perfect(int n)  //Perfect Function
{
    int i,f=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            f=f+i;
        }
    }
    return(f);
}
main()
{
    int r,n,s,c=1,p;
    
    do 
    {
        printf("\n--------Menu--------\n");
        printf("\n1)To Check Armstrong \n2)To Check Prime \n3)To Check Perfect \n4)Exit \n");
        
        printf("Enter Your Choice : ");
        scanf("%d",&s);
        
        switch(s)
        {
            case 1:
            {
                printf("Enter A Number : ");
                scanf("%d",&n);
                p=counting(n);
                if(armstrong(n,p)==n)
                printf("\nArmstrong Number\n");
                else
                printf("\nNot A Armstrong Number\n");
                break;
            }
            case 2:
            {
                printf("Enter A Number : ");
                scanf("%d",&n);
                if(prime(n)==2)
                printf("\nPrime Number\n");
                else
                printf("\nNot A Prime Number\n");
                break;
            }
            case 3:
            {
                printf("Enter A Number : ");
                scanf("%d",&n);
                if(perfect(n)==n)
                printf("\nPerfect Number\n");
                else
                printf("\nNot A Perfect Number\n");
                break;
            }
            case 4:
            {
                printf("\nBye\n");
                c=0;
                break;
            }
            default:
            {
                printf("\nInvalid Choice\n");
            }
        }
    }while(c!=0);
}