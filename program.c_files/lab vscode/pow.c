#include<stdio.h>


int main(){
    int base=0,pow=0;
    printf("enter your base value: ");
    scanf("%d",&base);
    printf("enter your power value: ");
    scanf("%d",&pow);
    int temp=base;
    
    while(pow>0){
        base=base*temp;
        pow--;
        printf("the result is:%d\n",base);
        
    }
    
    
}