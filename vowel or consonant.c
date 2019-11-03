#include<stdio.h>
void main()
{
    char c;
    printf("\n\n\n\n\t\tPROGRAM TO CHECK WEATHER A CHARACTER IS OWEL OR CONSONANT");
    printf("\n\n\n\n\tEnter a character:");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("\n\n\t%c is a vowel",c);
    else
        printf("\n\n\t%c is a consonant",c);
}
