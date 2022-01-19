#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    //initiating for loop to multiply the number by 1 and son on till number-1
    for(i=1;i<=n;i++){
        fact=fact*i;
        }
        printf("factorial=%d",fact);
    return 0;
} 
