#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

int main()
{
    char a[70],b[50];
    int c[10],p=0;
    int j=0,k=0,t=0,i=0,h=0;
    memset(a,'|',64);
    a[2]='e';a[3]='t';
    a[4]='i';a[5]='a';a[6]='n';a[7]='m';
    a[8]='s';a[9]='u';a[10]='r';a[11]='w';a[12]='d';a[13]='k';a[14]='g';a[15]='o';
    a[16]='h';a[17]='v';a[18]='f';;a[20]='l';;a[22]='p';a[23]='j';a[24]='b';a[25]='x';a[26]='c';a[27]='y';a[28]='z';a[29]='q';;;
    a[32]='5';a[33]='4';;a[35]='3';;;;a[39]='2';;;a[42]='+';;;;;a[47]='1';a[48]='6';a[49]='=';a[50]='/';;;;;;a[56]='7';;;;a[60]='8';;a[62]='9';a[63]='0';

    printf("enter name:");
    gets(b);
    h=strlen(b);
    //printf("  ");
    for(i=0;i<h;i++)
    {
        if((b[i]>64)&&(b[i]<91))
           {b[i]=b[i]+32;}
        else if(b[i]==32)
            {printf("    ");}
        for(j=0;j<64;j++)
        {
            //printf("i=%d\tj=%d\n",i,j);
            if(b[i]==a[j])
            {
                printf(" ");
                k=j;
                //printf("k=%d\n",k);
                while(k!=1)
                {
                    c[t]=(k%2);
                    //printf("kkk=%f\n",p/2);
                    k=k/2;
                    //printf("t=%d\tk=%d\n",c[t],k);
                    t++;
                }
                t--;
                for(k=t;k>=0;k--)
                {
                    //printf("ele=%d\tk=%d\n",c[k],k);
                    if(c[k]==0)
                       {printf(".");Beep(1350,200);}
                    else if(c[k]==1)
                        {printf("_");Beep(137 b0,500);}
                }
                k=1;t=0;
                memset(c,8,8);
            }
        }
    }
    return 0;
}
