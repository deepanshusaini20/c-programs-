#include<stdio.h>
int main(){
    float a;
    printf("ENTER A NUMBER \n");
    scanf("%f",&a);
    if(a==0){
        printf("0");
    }
    else if(a>0){
        printf("The number is positive");
    }
    else{
        printf("the number is negative");
    }
    return 0;



}
