#include<stdio.h>
void main(){
    int a;
    a=100;
    int *ptr;
    *ptr=a;
    printf("the address of the a stored %p",a);
}
