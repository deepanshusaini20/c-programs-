//printing array in reverse 
#include<stdio.h>
int main(){
    int i;
    int a[10/2];
    printf("\tenter values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("reverse array: ");
    for(i=4;i>=0;i--){  // initializing loop in decrement to get reverse of array
        printf("%d,",a[i]);
    }

}
