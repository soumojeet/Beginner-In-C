#include<stdio.h>
main()
{
    int n,d,p,q,r,s,t,u,v,w,x,y;
    printf("Enter the Amount\n");
    scanf("%d",&n);
    
    d=n;
    
    p=n/2000;
    n=n-(2000*p);
    q=n/500;
    n=n-(500*q);
    r=n/200;
    n=n-(200*r);
    s=n/100;
    n=n-(100*s);
    t=n/50;
    n=n-(50*t);
    u=n/20;
    n=n-(20*u);
    v=n/10;
    n=n-(10*v);
    w=n/5;
    n=n-(5*w);
    x=n/2;
    n=n-(2*x);
    y=n/1;
    
    printf("%d/- Amount has : \n",d);
    if(p!=0)
    printf("%d number of 2000/- note.\n",p);
    if(q!=0)
    printf("%d number of 500/- note.\n",q);
    if(r!=0)
    printf("%d number of 200/- note.\n",r);
    if(s!=0)
    printf("%d number of 100/- note.\n",s);
    if(t!=0)
    printf("%d number of 50/- note.\n",t);
    if(u!=0)
    printf("%d number of 20/- note.\n",u);
    if(v!=0)
    printf("%d number of 10/- note.\n",v);
    if(w!=0)
    printf("%d number of 5/- coin.\n",w);
    if(x!=0)
    printf("%d number of 2/- coin.\n",x);
    if(y!=0)
    printf("%d number of 1/- coin.",y);
    }