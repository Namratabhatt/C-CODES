#include<stdio.h>
#include<conio.h>
void main()
{int i,j;
char temp1,temp='H';
temp1=temp;
for(i=7;i>=0;i--)
{
    temp1--;
    temp=temp1;
    for(j=7-i;j>0;j--)
    printf(" ");
    for(j=1;j<=i;j++)
    {
        printf("%c",temp);
        --temp;
    }
    printf("\n");
    getch();
}
}
