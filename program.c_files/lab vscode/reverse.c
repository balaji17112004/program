#include<stdio.h>
int main(){
    int k=10000,sum=0;
    while(k>0){
        sum=k%10;
        k=k/10;        
        printf("%d",sum);


    }
}