#include<stdio.h>
main()
{
    int basic_salary;
    float gross_salary, hra, da;
    
    printf("Enter Salary :\n");
    scanf("%d",&basic_salary);
    
    if(basic_salary>=0 && basic_salary<=10000)
    {
       hra=basic_salary*0.2;
       da=basic_salary*0.8;
    }
    else if(basic_salary>10000 && basic_salary<=20000)
    {
        hra=basic_salary*0.25;
        da=basic_salary*0.9;
    }
    else if(basic_salary>20000)
    {
        hra=basic_salary*0.3;
        da=basic_salary*0.95;
    } 
    else
    printf("Invalid Input\n");
    
    gross_salary=basic_salary+hra+da;
    
    if(gross_salary>=0)
    {
        printf("The House Rent Allowances : %f\n",hra);
        printf("The Dearness Allowances : %f\n",da);
        printf("The Gross Salary : %f",gross_salary);
        }
}