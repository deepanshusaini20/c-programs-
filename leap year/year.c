#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("\t ENTER THE YEAR:\n");//taking year as input from user
    scanf("%d",&a);

    //leap year is perfectly divisible by 400
    if(a%400==0)
    {
        printf("IT'S A LEAP YEAR");
    }

    //not a leap year if divisible by 100 but not divisible by 400
    else if(a%100==0)
    {
        printf("IT'S NOT A LEAP YEAR");
    }
    //leap year if not divisible by 100 but divisible by 4
    else if(a%4==0){
        printf("IT'S A LEAP YEAR");
    }
    else{
        printf("IT'S NOT A LEAP YEAR");// all other years are not leap year
    }
    return 0;

}
