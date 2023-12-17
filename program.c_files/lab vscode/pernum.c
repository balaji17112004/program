#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    int i;
    int k;
    int sum=0;
    printf("enter your number: ");
    scanf("%d",&number);
    for(i=1;i<=number/2;i++){
        if(number%i==0)
        {
            sum=sum+i;
            if(sum==number)
           
            printf("you enter a perfect number:%d",sum);
            
            
        }
        else{
            printf("not a perfect number");
            break;
        }
        
    
        
    }
      
       
        
}