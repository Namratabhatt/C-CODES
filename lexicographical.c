#include<stdio.h>
void main()
{
    char a[100][100],temp[100];
    int i,j,count;
    printf("enter word limit");
    scanf("%d",&count);

    printf("Enter words");
    for(i=0;i<count;i++)
    scanf("%s",a);

    for(j=i+1;i<count;j++)
    {
        if(strcmp(a[i],a[j])>0)
        {
            strcpy(temp,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],temp);
        }
    }
    printf("\nIn lexicographical order: \n");
    for(i=0; i<count; ++i)
    {
        puts(a[i]);
    }
}
