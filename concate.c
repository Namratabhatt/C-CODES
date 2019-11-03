#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j;
    printf("Enter string1:");
    scanf("%s",a);
    printf("Enter string2:");
    scanf("%s",b);

    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';i++,j++)
    {
        a[i]=b[j];
    }
    a[i]='\0';
    printf("the string after catenation=%s",a);
}
