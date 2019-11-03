#include<stdio.h>
#include<stdlib.h>
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
void bubbleSort(int *a,int n)
{
	int k, j, temp;
	for(k = 1; k <= n-1; k++)
        {for(j = 0; j <= n-k-1; j++)
        {if(a[j]<=a[j+1])
        {
				temp = a[j];
		     	a[j] = a[j+1];
				a[j+1] = temp;
        }
    }
    }
}
int romanno(input)
{int i,j,d=0;
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
return d;
}

void noroman()
{    if(n<0)
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
void main()
{
char input1[100],input2[100],input3[20];
int i,j,k,d=0;
printf("\n\tEnter two numbers");
scanf("%s%s",&input1,&input2);
a=romanno(input1);
input1=noroman(a);
b=romanno(input2);
input2=noroman(b);
strcat(input1,input2);

bubblesort(input3,i);

}
