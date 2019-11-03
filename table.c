#include<stdio.h>
void main()
{
    int num;
    int prod=1;
    printf("\n\n\n\n\t\tPROGRAM TO DISPLAY MULTIPLICATION TABLE");
    printf("\n\n\n\tEnter the number:");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        prod=num*i;
        printf("\n\t%d*%d=%d",num,i,prod);

    }

}
