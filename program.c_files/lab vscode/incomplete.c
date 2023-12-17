#include<stdio.h>
int main(){
    int i=1,num,fact=0;
    printf("enter number you want? ");
    scanf("%d",&num);
for(i=num;i>=1;i--){
    fact=num%10;
    
    fact=fact*i;
    
    printf("%d\n",fact);
    
}
printf("%d\n",fact);
    
  
     
}