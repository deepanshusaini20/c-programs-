//printing array in reverse 
#include<stdio.h>
int main(){
    int i;
    int a[10/2];
    printf("\tenter values of array\n:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--){
        printf("%d,",a[i]);
    }

}
