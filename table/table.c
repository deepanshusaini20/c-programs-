#include<stdio.h>
#include<math.h>
#include<conio.h>//included for getch()
int main(){
    int a,i,table=1;
    printf("\tenter a number to get its table\n");// taking input number from user to print it's table
    printf("\t-------------------------------\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        
    table=a*i;//loop is used to multiply the given number by it's increment(+1) upto 10 times 
    
    printf("%d",table);//, is used to get 3,6,9 between numbers in output 
    printf(",");
        
    }
getch();
}
