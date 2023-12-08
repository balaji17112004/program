#include<stdio.h>
#include<stdlib.h>
void main(){
int i,*ptr,n=5;
ptr=(int*)malloc(n*sizeof(int));
printf("the memory block is created by malloc()\n");
printf("the address of the ptr :%p\n",ptr);
free(ptr);
ptr=(int*)calloc(n,sizeof(int));
printf("the address of the ptr1 :%p",ptr);
}
