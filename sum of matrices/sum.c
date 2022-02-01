//sum of 2 matrices of order 3
#include<stdio.h>
int main(){
    //taking values for matrix A from user
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter values for matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //printing matrix A 
    printf("MATRIX A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //taking values for matrix B from user
    printf("Enter values for matrix B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //printing matrix B
    printf("MATRIX B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //calculating sum of matrix A and B 
    printf("\n");
    printf("SUM OF MATRIX A AND B :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
    printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
