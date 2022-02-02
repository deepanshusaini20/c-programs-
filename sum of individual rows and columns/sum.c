//sum of individual rows and columns 
#include<stdio.h>
int main(){
    int a[3][3],i,j,sr,sc;
        printf("\tenter the values of matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix:\t\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        sr=0,sc=0;
        for(j=0;j<3;j++){
        sr=sr+a[i][j];
        sc=sc+a[j][i];
        }
        printf("sum of row =%d\nsum of column=%d\n",sr,sc);
    }
}
