#include<stdio.h>
void main()
{
    int yr;
    printf("\n\n\n\n\t\tPROGRAM TO DETERMINE WEATHR A YEAR IS LEAP YEAR");
    printf("\n\n\n\tEnter a year:");
    scanf("%d",&yr);

    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
                printf("\n\n\t%d is a leap year",yr);
            else
                printf("\n\n\t%d is not a leap year",yr);
        }
        else
            printf("\n\n\t%d is a leap year",yr);
    }
    else
        printf("\n\n\t%d is not a leap year",yr);
}
