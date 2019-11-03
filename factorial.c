#include<stdio.h>
void main()
{
    int num;
    int fact=1;
    printf("\n\n\n\n\t\tPROGRAM TO FIND THE FACTORIAL OF A NUMBER");
    printf("\n\n\n\tEnter the number:");
    scanf("%d",&num);

    for(int i=num;i>0;i--)
    fact*=i;
    printf("\n\n\tThe factorial of %d= %d",num,fact);


}
