// calculatr using switcch case
#include<stdio.h>
int main(){
    int a,b,sum,subtract,divide,multiply;
    char operator;
    printf("\t CALCULATOR\n");
    printf("\t-------------\n");
    printf("ENTER OPERATOR TO BE USED(+, - , * , /)\n\n");
    scanf("%c",&operator);
    printf("enter two values\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    switch(operator){
        case '+': sum=a+b;
        printf("a+b=%d",sum);
        break;

        case'-' : subtract=a-b;
        printf("a-b=%d",subtract);
        break;

        case'*': multiply=a*b;
        printf("a*b=%d",multiply);
        break;
        
        case'/': divide=a/b;
        printf("a/b=%d",divide);
        break;

        default:
        printf("enter valid opeartor");
    }
    return 0;
}


