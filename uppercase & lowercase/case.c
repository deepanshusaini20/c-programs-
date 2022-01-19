#include<stdio.h>
int main(){
    char ch;
    //input character from user
    printf("ENTER A CHARACTER: ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <='z'){
        printf("IT'S A UPPERCASE ALPHABET");
    }
    else if(ch >='a' && ch <='z'){
        printf("IT,S A LOWERCASE ALPHABET");
    }
    else{
        printf("IT'S NOT AN ALPHABET");
    }
    return 0;
}
