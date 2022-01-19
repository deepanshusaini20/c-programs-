#include<stdio.h>
int main(){
    int integertype;
    float floattype;
    double doubletype;
    char chartype;
    //(sizeof) operator is used to evaluate size of variables
    printf("size of integer:%lu bytes \n",sizeof(integertype));
    printf("size of float:%lu bytes \n",sizeof(floattype));
    printf("size of double:%lu bytes \n",sizeof(doubletype));
    printf("size of char:%lu bytes \n"),sizeof(chartype);
    return 0;
    }
