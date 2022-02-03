// program to find determinant of a matrix of order 3
#include<stdio.h>
int main(){
    int d[3][3],i,j;
    long det;
    printf("\t PROGRAM TO SOLVE DETERMINANT OF MATRIX OF ORDER 3X3\n");
    printf("\t -------------------------------------------------\n");
    //taking values from user for matrix
    printf("enter elements of matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    scanf("%d",&d[i][j]);}
    }
    //printing matrix given by user 
    printf("MATRIX:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    printf("%d\t",d[i][j]);}
    printf("\n");
    }
    printf("\n");
    //mathematical operations for solving a determinants 
    det=d[0][0]*((d[1][1]*d[2][2]) - (d[2][1]*d[1][2])) -  d[0][1] * ((d[1][0]
   * d[2][2]) - (d[2][0] * d[1][2])) + d[0][2] * ((d[1][0] * d[2][1]) - (d[2][0] * d[1][1]));
printf("\n");
printf("DETERMINANT OF MATRIX 3X3=%ld",det);
return 0;
}
