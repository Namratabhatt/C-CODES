#include<stdio.h>
#include<math.h>
void main()
{
    float det,rt1,rt2,real,img,a,b,c;
    printf("\n\n\n\n\t\tPROGRAM TO DETERMINE THE ROOTS OF THE QUADRATIC EQUATION");
    printf("\n\n\n\tEnter coefficients a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    det=sqrt(b*b-4*a*c);

    if(det>0)
    {
       rt1=(-b+det)/(2*a);
       rt2=(-b-det)/(2*a);
       printf("\n\n\troot1=%f and root2=%f",rt1,rt2);
    }

       else if(det=0)
       {
        rt1=rt2=-b/(2*a);
        printf("\n\n\troot1=root2=%f",rt1);
       }

       else
       {
        real=(-b/2*a);
        img=sqrt(-det)/(2*a);
        printf("\n\n\troot1=%f+%fi and root2=%f-%fi",real,img,real,img);
       }



}
