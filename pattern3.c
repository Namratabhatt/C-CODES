#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter rows");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        for(k=i+1;k<=n;j++)
        printf("%d",j+1);
        for(j=i;j>1;j--)
        printf("%d",j+i-2);
        printf("\n");
    }

}
