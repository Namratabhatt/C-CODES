#include<stdio.h>

int gcd(int m,int n);
void main()
{
  int num1,num2,s;
  printf("Program to find the sum of natural numbers using recursion");
  printf("\nEnter a two numbers:");
  scanf("%d%d",&num1,&num2);
  s=gcd(num1,num2);
  printf("\nThe gcd of the numbers=%d",s);
}

int gcd(int m,int n)
{
    if(n!=0)
    return gcd(n,n%m);
    else
    return m;
}
