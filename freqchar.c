#include<stdio.h>
void main()
{
    char a[100],cha;
    int i,count=0;
    printf("Enter a string:");
    gets(a);
    printf("Enter the char:");
    scanf("%c",&cha);

    for(i=0;a[i]!='\0';i++)
    {
        if(cha==a[i])
        count++;
    }
    printf("The frequency of characters in the string is=%d",count);
}
