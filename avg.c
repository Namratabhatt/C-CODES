#include<stdio.h>

void main()
{
    int size,i,a[100],sum=0,avg;
    printf("\n\tPROGRAM TO FIND THE AVERAGE USING ARRAY");
    printf("Enter the size of array");
    scanf("%d",&size);

    printf("Enter the array");
    for(i=0;i<size;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<size;i++)
    {
                sum+=a[i];
    }
    avg=sum/size;
    printf("The average of the array is =%d",avg);
}
