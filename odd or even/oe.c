#include<stdio.h>
int main(){
    int a,x;
    printf("\t Enter a number\n ");
    //taking value from user to be checked for odd or even
    scanf("%d",&a);
    x=(a%2==0)?printf("The number is even"):printf("The number is odd");//here ternary operator is used
    //number completely divisible by 2 is even else odd
    return 0;

}
