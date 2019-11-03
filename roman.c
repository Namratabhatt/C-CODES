#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char roman[]={'I','V','X','L','C','D','M','v','x','l','c','d','m'};
int decimal[]={1,5,10,50,100,500,1000,5000,10000,50000,100000,500000,1000000};

void noroman()
{
    int n,grt,low,d;
    printf("\n\t\Enter number to convert:");
    scanf("%d",&n);

    if(n<0)
        printf("Negative number");
    else if(n==0)
        printf("Zero");
    else
    while(n>0)
 {
    for(grt=12;grt>0;grt--)
    {
       if(n>=decimal[grt])
            break;
    }

    for(low=0;low<13;low++)
    {
       if(n<=decimal[low])
            break;
    }
    d=n;
    while(d!=0)
    {
        d/=10;
        if(d<10)
            break;
    }

    if(n<10 && n==4)
    {
    printf("%c%c",roman[grt],roman[low]);
    n=0;
    }

    else if(n>10 && d==4)
    {
    printf("%c%c",roman[grt],roman[low]);
    n-=(decimal[low]-decimal[grt]);
    }

    else if(n<10 && n==9)
    {
    printf("%c%c",roman[grt-1],roman[low]);
    n=0;
    }

    else if(n>10 && d==9)
    {
    printf("%c%c",roman[grt-1],roman[low]);
    n-=(decimal[low]-decimal[grt-1]);
    }

    else
    {
    printf("%c",roman[grt]);
    n-=decimal[grt];
    }
}
}
int ind(char a)
{
    int k;
    for(k=0;k<13;k++)
    {
        if(roman[k]==a)
            return k;
    }
    return -1;
}
void romanno()
{
    char input[10];
    int i,j,d=0;
    printf("\n\tEnter number to convert:");
    scanf("%s",&input);

    i=strlen(input)-1;
    d+=decimal[ind(input[i])];
    j=i;
    i--;

    while(i>=0)
    {
        if(ind(input[i])>= ind(input[j]))
           d+=decimal[ind(input[i])];
        else
           d-=decimal[ind(input[i])];
        i--;
        j--;
    }

    printf("Number=%d",d);
}
void main()
{
    int ch;
    printf("1.Number >>> roman\n2.Roman >>> number\n\tEnter yout choice:");//\n3.N no. of roman\n4.Check roman\n5.Exit");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:noroman();
            break;
        case 2:romanno();
            break;
        /*case 3:all();
            break;
        case 4:check(a);
            break;
        case 5:exit(0);*/
    }
}
