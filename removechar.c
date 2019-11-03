#include<stdio.h>
void main()
{
    printf("Program takes a strings from user and removes all characters in that string except alphabets.");
    char a[100];
    int i;
    printf("\nEnter a string:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        printf("%c",a[i]);
    }
}
