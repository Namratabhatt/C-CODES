#include<stdio.h>

int prime(int a)
{
    int j,flag=1;

    for(j=2;j<a/2;j++)
        {
            if(a%j==0)
            {
            flag=0;
            break;
            }
        }
        a++;
        return flag;
}
void main()
{
    printf("\n\n\n\t\t\tDISPLAY ALL PRIME NUMBERS BETWEEN TWO INTERVALS");
    int i,l,u,flag;
    printf("\n\tEnter the lower limit:");
    scanf("%d",&l);
    printf("\n\tEnter upper limit:");
    scanf("%d",&u);
     printf("The prime numbers are");

    for(i=l+1;i<u;i++)
    {
    flag=prime(i);

    if(flag==1)
    printf("\t%d",i);
    }
}
