#include<stdio.h>
main()
{
    float n, q, dis, tax, total_price, net_price, dis_price, tax_price;    
    printf("Enter Price, Quantity, Discount, Tax of Material\n");
    scanf("%f%f%f%f",&n,&q,&dis,&tax);
    net_price=n*q;
    total_price=net_price+(net_price*tax/100)-(net_price*dis/100);
    printf("The Cost to be paid : %f",total_price);
}