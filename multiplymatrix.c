#include<stdio.h>

void main()
{
    int i,j,k,a[10][10],b[10][10],d[10][10],r1,r2,c1,c2,sum=0;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    }
    if(r2==c1)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
            for(k=0;k<r2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
                d[i][j]=sum;
            }
        }
    }
    printf("Output");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        printf("%d",d[i][j]);
    }
    printf("\n");
    }
}
}
