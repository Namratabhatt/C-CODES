#include<stdio.h>
#include<string.h>

char roman[]={'I','V','X','L','C','D','M','v','x','l','c','d','m'};
int decimal[]={1,5,10,50,100,500,1000,5000,10000,50000,100000,500000,1000000};

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
void main()
{
    char input[10];
    int i,j,d=0;
    printf("Enter number to convert:");
    scanf("%s",&input);

    i=strlen(input)-1;
    d+=decimal[ind(input[i])];
    j=i;
    i--;

    while(i>=0)
    {
        if(ind(input[i])>ind(input[j]))
           d+=decimal[ind(input[i])];
        else
           d-=decimal[ind(input[i])];
        i--;
        j--;
    }

    printf("Number=%d",d);
}
