#include<stdio.h>

struct poly
    {
        int coeff;
        int expo;
    }a[10],b[10],c[10];

int read(struct poly p[10])
{
    int i,t;
    printf("Enter no. of terms:");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    printf("Enter coefficient %d:",i+1);
    scanf("%d",&p[i].coeff);
    printf("Enter exponent %d:",i+1);
    scanf("%d",&p[i].expo);
    }
    return t;
}
void disp(struct poly p[10],int t)
 {
	int k;
    for(k=0;k<t-1;k++)
	printf("%d(x^%d)+",p[k].coeff,p[k].expo);
	printf("%d(x^%d)",p[t-1].coeff,p[t-1].expo);
}
int add(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
 {
     int i,j,k;
     i=0;
     j=0;
     k=0;

 while (i<t1 && j<t2)
	{
		if(p1[i].expo==p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff + p2[j].coeff;
			p3[k].expo=p1[i].expo;

			i++;
			j++;
			k++;
		}
		else if(p1[i].expo>p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff;
			p3[k].expo=p1[i].expo;
			i++;
			k++;
		}
		else
            {
			p3[k].coeff=p2[j].coeff;
			p3[k].expo=p2[j].expo;
			j++;
			k++;
		}
	}
	while(i<t1)
	{
		p3[k].coeff=p1[i].coeff;
		p3[k].expo=p1[i].expo;
		i++;
		k++;
	}
	while(j<t2)
	{
		p3[k].coeff=p2[j].coeff;
		p3[k].expo=p2[j].expo;
		j++;
		k++;
	}
return(k);
 }
int sub(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
 {
	int i=0,j=0,k=0;

	while(i<t1 && j<t2)
	{
		if(p1[i].expo==p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff - p2[j].coeff;
			p3[k].expo=p1[i].expo;

			i++;
			j++;
			k++;
		}
		else if(p1[i].expo>p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff;
			p3[k].expo=p1[i].expo;
			i++;
			k++;
		}
		else
            {
			p3[k].coeff=p2[j].coeff;
			p3[k].expo=p2[j].expo;
			j++;
			k++;
		}
	}
	while(i<t1)
	{
		p3[k].coeff=p1[i].coeff;
		p3[k].expo=p1[i].expo;
		i++;
		k++;
	}
	while(j<t2)
	{
		p3[k].coeff=p2[j].coeff;
		p3[k].expo=p2[j].expo;
		j++;
		k++;
	}
return(k);
 }
void main()
{int t1,t2,t3,ch;
    printf("First polynomial:\n");
    t1=read(a);
    disp(a,t1);
    printf("\nSecond polynomial:\n");
    t2=read(b);
    disp(b,t2);
    printf("What do you want to perform?");
    printf("\n1.addition");
    printf("\n2.substraction");
    printf("\n3.multilication");
    printf("\n4.divition");
    printf("\nEnter your choice");
    scanf("%d",ch);

    switch(ch)
    {
    case 1:t3=add(a,b,t1,t2,c);
    case 2:t3=sub(a,b,t1,t2,c);
    /*case 3:mul();
    case 4:div();*/
    }
    printf("Resutant=");
    disp(c,t3);
}
