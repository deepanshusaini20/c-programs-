#include<stdio.h>
int main(){
    int r;
    float multiply1,multiply2;
    printf("\t----------------------------\n");
    printf("radius:");
    scanf("%d",&r);
    multiply1=(float)3.14159265*r*r;
    multiply2=(float)3.14159265*2*r;
    printf("The area of circle is: %f \n",multiply1);
    printf("The circumference of circle is: %f \n",multiply2);
    return 0;
    
    
}
