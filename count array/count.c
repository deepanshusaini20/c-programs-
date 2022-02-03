//program to count number of elements in an array
#include<stdio.h>
int main(){ 

    int a[] ={23,56,78,90,6,7,56,78,54,67,34,89,1,950,13,78,75,98,748,9378,85,0,89,61,948,75};
    printf("%d",sizeof(a)/sizeof(a[0]));// use of size of operator to calculate size of all elements/ size of one element 
    return 0;

}
