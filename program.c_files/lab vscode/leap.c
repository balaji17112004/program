#include<stdio.h>
int main(){
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    if(year%4==0){
        printf("this %d year is leap year",year);
    }
    else{
        printf("its %d not a leap year",year);
    }
}