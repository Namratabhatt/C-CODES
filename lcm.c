#include<stdio.h>
void main()
{
    int num1,num2,hcf,lcm;
    printf("\n\n\n\n\tPROGRAM TO FIND THE HCF OF A NUMBERS");
    printf("\n\n\n\tEnter the numbers:");
    scanf("%d%d",&num1,&num2);

    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
            hcf=i;
    }
    lcm=(num1*num2)/hcf;
    printf("\n\n\n\tTHE LCM OF THE NUMBER IS %d",lcm);
}
