#include<stdio.h>
main()
{
    int m1, m2, m3, m4, m5, tot;
    float avg,per;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    tot=m1+m2+m3+m4+m5;
    avg=tot/5.0;
    per=(tot/500.0)*100.0;
    printf("Total Marks = %d\n",tot);
    printf("Average = %.3f\n",avg);
    printf("Percentage = %.3f",per);
}