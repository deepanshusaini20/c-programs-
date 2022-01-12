#include<stdio.h>
int main(){
    int n,original, remainder,rev=0;
    printf(" enter a number\n");
    scanf("%d",&n);
    n=original;
    while(n!=0){
        remainder=n%10;
        rev=rev*10+remainder;  
        n=n/10;
    }
    if(n=rev){
        printf("the number is in pallindrome ");
    }
    else{
        printf("the number is not in pallindrome");
    }
    return 0;
    
}
