#include<stdio.h>
int sum();// declaration of function

    int main()
    {
sum();
sum();
sum();
    }  // calling the function

    int sum()
    {
    int a,b,sum=0;
    printf("enter two numbers:");
    scanf("%d %d", &a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    }// defining the function
