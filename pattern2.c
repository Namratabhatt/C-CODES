#include<stdio.h>
void main()
{
    int i,j,n,t;
    printf("Enter the line number");
    scanf("%d",&n);
     for(t=1;t<=2*(n-1);t+=2)
     {
         for(i=t;i<2*(n-1);i++)
            printf(" ");
         for(j=1;j<=t;j++)
            printf("*");
         printf("\n");
     }
}
