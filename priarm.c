#include<stdio.h>

void prime(int m);
void arm(int n);

void main()
{
    int num;
    printf("\n\n\t\tPROGRAM TO CHECK WHEATHR A NUMBER IS PRIME AND ARMSTRONG");
    printf("\n\nEnter a number");
    scanf("%d",&num);
    prime(num);
    arm(num);
}

void prime(int m)
{
    int i,fact=0;
    for(i=2;i<m/2;i++)
    {
        if(m%i==0)
        fact=1;
    }
    if(fact==0)
        printf("\n\nIt is a prime number");
    else
        printf("\n\nIt is not a prime number");
}

void arm(int n)
{
    int i,d,temp,s=0;
    temp=n;
    while(n!=0)
    {
       d=n%10;
       s+=d*d*d;
       n/=10;
    }
    if(temp==s)
        printf("\n\nIt is a armstong number");
    else
        printf("\n\nIt is not a armstong number");
}
