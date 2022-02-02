//number of odd/even elements in an array
#include<stdio.h>
int main(){

    int a[10];
    int even=0,odd=0,i;
    printf("enter 10 integers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0)
        even=even+1;
        else
        odd++;}
        printf("even elements are %d\n",even);
        printf("odd elements are %d",odd);
    

}
