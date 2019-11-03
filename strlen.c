#include<stdio.h>
void main()
{
    printf("Program find the length of a string without using strlen() function");
    char a[100];
    int i,count=0;
    printf("\nEnter a string:");
    scanf("%s",&a);

    for(i=0;a[i]!='\0';i++)
    count++;
    printf("the lenght of the string is=%d",count);
}
