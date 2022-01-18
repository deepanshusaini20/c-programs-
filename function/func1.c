#include<stdio.h>

int sum()
    {
    int a,b,sum=0;
    printf("enter two numbers:");
    scanf("%d %d", &a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    }// defining the function


    int main()
    {
sum();
sum();
sum();
printf("hello");
    }  // calling the function

    // function is working without declaring as we defined first and then called it 

