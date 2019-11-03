#include<stdio.h>
void main()
{
    int nm1,nm2,nm3;
    printf("\n\n\n\n\t\tPROGRAM TO DETERMINE THE LARGEST NUMBER");
    printf("\n\n\n\tEnter numbers:");
    scanf("%d%d%d",&nm1,&nm2,&nm3);

    if(nm1>nm2 && nm1>nm3)
        printf("\n\n\t%d is the largest number",nm1);
    else if(nm2>nm1 && nm2>nm3)
        printf("\n\n\t%d is the largest number",nm2);
    else
        printf("\n\n\t%d is the largest number",nm3);

}
