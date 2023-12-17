#include<stdio.h>
int main(){
    int a=0,b=1;
    int num=10;
    num=num-2;
    printf("%d\t%d\t",a,b);
    
    while(0<num){
        int c=a+b;
            a=b;
            b=c;
            printf("%d\t",c);
            num--;


    }
}