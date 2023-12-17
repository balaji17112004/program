#include<stdio.h>
int main(){
    int k=1050;
    int a=1050%10;
    int a1=k/10;
    printf("a=%d\n",a);
    printf("a1=%d\n",a1);
    int b=a1%10;
    int b1=a/10;
    printf("b=%d\n",b);
    printf("b1=%d\n",b1);
    int c=b1%10;
    int c1=b/10;
    printf("c=%d\n",c);
    printf("c1=%d\n",c1);
    int d=c1%1;
    int d1=c/1;
    printf("d=%d\n",d);
    printf("d1=%d\n",d1);
    int j=a+b+c+d;
    printf("the addition of given number:%d",j);
}