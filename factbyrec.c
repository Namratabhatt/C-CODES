#include<stdio.h>

int fact(int m);
void main()
{
  int num,s;
  printf("Program to find the sum of natural numbers using recursion");
  printf("\nEnter a natural number:");
  scanf("%d",&num);
  s=fact(num);
  printf("\nThe factorial of the number=%d",s);
}

int fact(int m)
{
    if(m>0)
    return m*fact(m-1);
    else
    return 1;
}
