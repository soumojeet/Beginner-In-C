#include<stdio.h>
main()
{
    int phy, chem, bio, math, comp, total;
    float per;
    printf("Enter Marks of Physics, Chemistry, Biology, Mathematics, Computer :\n");
scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    total=phy+chem+bio+math+comp;
    per=(total/500.0)*100.0;
    
    printf("Total Marks obtained : %d\n",total);
    printf("Percentage obtained : %.2f\n",per);
    printf("Grade obtained : ");
    
    if(per>=90)
    printf("A");
    else if(per>=80)
    printf("B");
    else if(per>=70)
    printf("C");
    else if(per>=60)
    printf("D");
    else if(per>=40)
    printf("E");
    else
    printf("F");
}