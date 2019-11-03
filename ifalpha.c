#include<stdio.h>
void main()
{
    char c;
    printf("\n\n\n\n\t\tPROGRAM TO CHECK IF THE GIVEN CHARACTER IS AN ALPHABET");
    printf("\n\n\n\tEnter a character:");
    scanf("%c",&c);

    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("\n\n\t%c is an alphabet",c);
    else
        printf("\n\n\t%c is not a alphabet",c);

}
