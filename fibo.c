#include<stdio.h>
int fibo(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    return (fibo(a-1)+fibo(a-2));
}

void main()
{
    int i,n,j=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for(i=1;i<=n;i++)
    {
        printf("%d",fibo(j));
        j++;
    }
}
