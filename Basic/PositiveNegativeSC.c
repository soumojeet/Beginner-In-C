#include<stdio.h>
main()
{
    int n;
    printf("Enter A Number :\n");
    scanf("%d",&n);
    
    switch(n>0)
    {
    case 1:
    {
    printf("Positive");
    break;
    }
    case 0:
    {
        switch(n<0)
        {
            case 1:
            {
                printf("Negative");
            break;
            }
            case 0:
            {
                printf("Zero");
            break;
            }
        }    
    }
    }
}
    