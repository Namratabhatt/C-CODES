#include<stdio.h>
int check(int m);

 void main()
 {
     int num,i,flag=0;
     printf("\n\n\t\tProgram to check weather a number can be expressed as sum of two prime numbers");
     printf("\nEnter a number:");
     scanf("%d",&num);

     for(i=2;i<=num/2;i++)
     {
         if(check(i)==1)
         {
          if(check(num-i)==1)
           {
            printf("%d=%d+%d\n",num,i,num-i);
            flag=1;
           }
         }
     }
     if(flag==0)
        printf("Number cannot be expressed");
 }

 int check(int m)
 {
    int i,fact=1;
     for(int i=2;i<m/2;i++)
     {
      if(m%i==0)
      {
      fact=0;
      break;
      }
     }
     return fact;
 }
