// designated initialization of arrays 
#include<stdio.h>
int main(){ int i,j,b;
printf("\t TRY your LUCK TO GET MY NUMBER\n")
    int a[10]={9,7,6,7,8,0,4,3,2,0};
    printf("digits of mobile number\n");
    for(i=0;i<10;i++){
        printf("%d,",a[i]);
    }
    printf("\n");
    printf("enter a number between 0 or 1\n");
    scanf("%d",&b);
    if(b==0){
        printf("better luck next time");
    }
    else{
        printf("mobile number=");
        int a[10]={[0]=9,[1]=8,[2]=7,[3]=4,[4]=3,[5]=6,[6]=2,[7]=0,[8]=7,[9]=0};// all elements of arrays are designated a position
        for(j=0;j<10;j++){
        printf("%d",a[j]);}
        }
}    
