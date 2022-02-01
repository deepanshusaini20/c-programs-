// transpose of a matrix
#include<stdio.h>
int main(){
    int a[2][3],i,j;
    printf("\tenter the values of matrix:\n");
  //loop to take values from user
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
  //loop to print matrix given by user
    printf("matrix:\t\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
  //loop to print transpose of recorded matrix
    printf("transpose:\t\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
