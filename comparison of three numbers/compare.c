#include<stdio.h>
int main(){
    int a,b,c;
    printf("\t Enter values of a,b and c\n"); //taking values from user to compare
    printf("\t -------------------------\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
    // using logical opeartor to compare between numbers by using two conditions at same time 
    if(a>b && b>c){
        printf("a is the greatest number between a,b and c");
    }
    else if(b>a && a>c){
        printf("b is the greatest number between a,b and c");
    }
    else{
        printf("c is the greatest number between a,b and c");
    }
    return 0;
    }
