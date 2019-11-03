#include<stdio.h>
void main()
{
    int num;
    printf("\n\n\n\n\tPROGRAM TO CHCK WEATHER NUMBER IS EVEN OR ODD");
    printf("\n\n\n\n\t\tEnter a number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n\n\t%d is an even number",num);
    else
        printf("\n\n\n\t%d is an odd number",num);
}
