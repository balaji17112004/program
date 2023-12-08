#include<stdio.h>
int main(){
static int i[5]={1,2,3,4,5};
int *m=&i[2]-0x1;
*m=25;
   printf("the address of 1 is:%p\n",&i[0]);
   printf("the address of 2 is:%p\n",&i[1]);
   printf("the address of 3 is:%p\n",&i[2]);
   printf("the address of 4 is:%p\n",&i[3]);
   printf("the address of 5 is:%p\n",&i[4]);
   printf("the address of m is:%p\n",m);
   printf("the value has been changed is:%d\n",i[1]);
