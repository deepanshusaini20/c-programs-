#include<stdio.h>
#define N 50
int main(){
    int a,b;
    int y[N][N],z[N][N],l[N][N],d,w,k,sum=0,m,n,g,h;
    int x[3][3],e,f;
    printf("\tMENU\n");
    printf("\t-----\n");
    char operation;
    printf("enter keyword of  operation to be done from following list\n");
    printf("1.addition of two matrix-keyword(a)\n");
    printf("2.subtraction of matrix-keyword(b)\n");
    printf("3.transpose of a matrix-keyword(c)\n");
    printf("4.product of two matrix-keyword(d)\n");
    printf("5.upper & lower triangular matrix-keyword(e)\n");
    scanf("%c",&operation);
    switch(operation){
        case'a':
        printf("enter values for sum of matrix\n");
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
    printf("\n");
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
    printf("\n");
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
    break;

    case'b':
printf("enter values for subtraction of matrix\n");
        int r[3][3],t[3][3],s[3][3],p,o;
    printf("Enter values for matrix A:\n");
    for(p=0;p<3;p++){
        for(o=0;o<3;o++){
            scanf("%d",&r[p][o]);
        }
    }
    //printing matrix A 
    printf("MATRIX A:\n");
    for(p=0;p<3;p++){
        for(o=0;o<3;o++){
            printf("%d\t",r[p][o]);
        }
        printf("\n");
    }
    printf("\n");
    //taking values for matrix B from user
    printf("Enter values for matrix B:\n");
    for(p=0;p<3;p++){
        for(o=0;o<3;o++){
            scanf("%d",&t[p][o]);
        }
    }
    //printing matrix B
    printf("MATRIX B:\n");
    for(p=0;p<3;p++){
        for(o=0;o<3;o++){
            
            printf("%d\t",t[p][o]);
        }
        printf("\n");
    }
    printf("\n");
    //calculating subtraction of matrix A and B 
    printf("\n");
    printf("SUM OF MATRIX A AND B :\n");
    for(p=0;p<3;p++){
        for(o=0;o<3;o++){
            s[p][o]=r[p][o]-t[p][o];
    printf("%d\t",s[p][o]);
        }
        printf("\n");
    }
    break;

    case'c':
    printf("\tenter the values of matdrix:\n");
    for(e=0;e<3;e++){
        for(f=0;f<3;f++){
            scanf("%d",&x[e][f]);
        }
    }
    printf("matrix:\t\n");
    for(e=0;e<3;e++){
        for(f=0;f<3;f++){
            printf("%d\t",x[e][f]);
        }
        printf("\n");
    }
    printf("transpose:\t\n");
    for(e=0;e<3;e++){
        for(f=0;f<3;f++){
            printf("%d\t",x[f][e]);
        }
        printf("\n");
    }
    break;

    case'd':
    //taking values for matrix A from user
    printf("enter the number of rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter values for matrix A:\n");
    for(d=0;d<m;d++){
        for(w=0;w<n;w++){
            scanf("%d",&y[d][w]);
        }
    }
    //printing matrix A 
    printf("MATRIX A:\n");
    for(d=0;d<m;d++){
        for(w=0;w<n;w++){
            printf("%d\t",y[d][w]);
        }
        printf("\n");
    }
    printf("enter the number of rows and columns of second matrix:\n");
    scanf("%d %d",&g,&h);
    //taking values for matrix B from user
    printf("Enter values for matrix B:\n");
    for(d=0;d<g;d++){
        for(w=0;w<h;w++){
            scanf("%d",&z[d][w]);
        }
    }
    //printing matrix B
    printf("MATRIX B:\n");
    for(d=0;d<g;d++){
        for(w=0;w<h;w++){
            printf("%d\t",z[d][w]);
        }
        printf("\n");
    }
    if(n!=g){
        printf("can't multiply");
    }
    else{
    printf("\n");
    for(d=0;d<m;d++)
    {
        for(k=0;k<h;k++)
        { sum=0; 

        for(k=0;k<h;k++)
        {
            sum=sum+(y[d][k]*z[k][w]);

            l[d][w]=sum;
            
        }
        }
    }
    printf("multiplication is :\n");
    for(d=0;d<m;d++)
    {
        for(w=0;w<h;w++)
        {
        printf("%d\t",l[d][w]);        
        }
        printf("\n");
    }
    }
    break;
    default:
    printf("enter valid operation");

}
return 0;
}
