#include<stdio.h>

int sum(int m);
void main()
{
  int num,s;
  printf("Program to find the sum of natural numbers using recursion");
  printf("\nEnter a natural number:");
  scanf("%d",&num);
  s=sum(num);
  printf("\nThe sum of the numbers=%d",s);
}

int sum(int m)
{
    if(m!=0)
    return m+sum(m-1);
    else
    return m;
}
