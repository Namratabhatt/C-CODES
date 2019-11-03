#include<stdio.h>
void main()
{
    int num,p=0,n=0,z=0;
    printf("\n\n\n\tEnter numbers:");
    printf ("\n\n\nEnter -1 to exit");

    while(num!=-1)
    {
    scanf("%d",&num);

    if(num>0)
        p++;
    else if(num<0)
        n++;
    else if(num==0)
        z++;

    }

    printf("positive numbers=%d",p);
    printf("negative numbers=%d",n);
    printf("zeroes=%d",z);
}
