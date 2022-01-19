#include<stdio.h>
int main(){
    char c;
    printf("\t ENTER A CHARACTER \n");
    scanf("%c",&c);
    //%d displays integer value of character
    //%c displays actual caharacter
    printf("THE ASCII VALUE OF %c is %d",c,c);
    return 0;
}
