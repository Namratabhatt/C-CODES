#include<stdio.h>
void main()
{
    int num;
    int sum=0;
    printf("\n\n\n\n\tPROGRAM TO FIND THE SUM OF N NATURAL NUMBERS");
    printf("\n\n\n\tEnter the number of natural numbers to be added:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
        sum+=i;

        printf("\n\n\tSum of n natural numbers is = %d",sum);

}
