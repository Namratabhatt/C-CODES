#include<stdio.h>
#include<string.h>
void main()
{
    int l,n,temp;
    char a[50],b[60];
    printf("Enter a string:");
    scanf("%s",a);
    strcpy(b,a);
    l=0;
    n=strlen(a);
    while(l<n)
    {
        temp=a[l];
        a[l]=a[n];
        a[n]=temp;
        l++;
        n--;
    }
    if(strcmp(a,b)==0)
    printf("palindrome");
    else
    printf("not palindrome");
}
