#include<stdio.h>
#include<math.h>
int main (){
    int a,b;
    printf("\tenter two values for a and b\n");
    printf("\t----------------------------\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping are:a=%d,b=%d",a,b);
    return 0;
    }
