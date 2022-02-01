 multiplication of two matrix
#include<stdio.h>
#define N 50
int main(){
    //taking values for matrix A from user
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("enter the number of rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter values for matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //printing matrix A 
    printf("MATRIX A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the number of rows and columns of second matrix:\n");
    scanf("%d %d",&p,&q);
    //taking values for matrix B from user
    printf("Enter values for matrix B:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //printing matrix B
    printf("MATRIX B:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p){
        printf("can't multiply");
    }
    else{
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        { sum=0; 

        for(k=0;k<q;k++)
        {
            sum=sum+(a[i][k]*b[k][j]);

            c[i][j]=sum;

        scanf("%d",&c[i][j]);
        }
        }
    }
    printf("multiplication is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
        printf("%d\t",c[i][j]);        
        }
        printf("\n");
    }
    }
    }
