#include<stdio.h>
int main(){
    int i;
    int j;
    int factor;
    printf("enter your factor value: ");
    scanf("%d",&factor);
    for(i=1;i<=factor;i++){
        for(j=1;j<=i;j++)
        if(factor%i==0){
            printf("i[%d] factorial number\n",i);
            break;
        }else{
            printf("factor no.[%d] not a factorial\n",i);
            break;

        }
    }
}