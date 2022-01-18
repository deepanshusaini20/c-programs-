#include<stdio.h>
int main()
{
    char letter,a,i,e,o,u,A,I,E,O,U;
    printf("\t ENTER AN ALPHABET\n");
    // taking alphabet as input from user
    scanf("%c",&letter);

    //five vowels of english alphabets in both lowercase and uppercase 

    if(letter=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')

    //logical OR operator is used to check all possiblities in just a line
    {
        printf("it's a vowel");
    }
    //rest all alphabets are consonants
    else{
        printf("it's a consonant");
    }
    return 0;
    }
