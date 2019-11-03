#include<stdio.h>
void main()
{
    printf("\n\tProgram counts the number of vowels, consonants, digits and white-spaces in a string which is entered by the user");
    char a[100];
    int i,vowel=0,conso=0,dig=0,space=0;
    printf("\n\t\tEnter a string:");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        vowel++;
        else if(a[i]>='a' && a[i]<='z')
            conso++;
        else if(a[i]>='1' && a[i]<='9')
            dig++;
        else if(a[i]==' ')
            space++;
     }
    printf("\n\t\t\tThe frequency of vowel in the string is=%d",vowel);
        printf("\n\t\t\tThe frequency of consonant in the string is=%d",conso);
    printf("\n\t\t\tThe frequency of digit in the string is=%d",dig);
    printf("\n\t\t\tThe frequency of white space in the string is=%d",space);

}
