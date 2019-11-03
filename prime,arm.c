#include<stduo.h>

void prime(int m);
void arm(int n);

void main()
{
    int num;
    printf("\n\n\t\tPROGRAM TO CHECK WHEATHR A NUMBER IS PRIME AND ARMSTRONG");
    printf("Enter a number");
    scanf("%d",&num);
    prime(num);
    arm(num);

}

void prime(int m)
{
    int i,fact=1;
    for(i=0;i<m;i++)
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
    int temp,s=0;
    temp=n;
    for(i=0;i<n;i/=10)
    {
       d=n%10;
       s+=d*d*d;
    }
    if(temp==s)
        printf("\n\nIt is a armstong number");
    else
        printf("\n\nIt is not a armstong number");
}
