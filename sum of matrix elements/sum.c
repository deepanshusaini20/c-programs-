// 2-d array(matrix) and its sum
#include<stdio.h>
int main(){
    int a[2][3],i,j,sum=0;
    printf("enter values for matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){ 
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum=%d",sum);
}
