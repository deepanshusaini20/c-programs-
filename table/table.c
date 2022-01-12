#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,i,table=1;
    printf("\tenter a number to get its table\n");
    printf("\t-------------------------------\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        
    table=a*i;
    
    printf("%d",table);
    printf(",");
        
    }
getch();
}
