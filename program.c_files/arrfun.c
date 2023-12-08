

#include<stdio.h>
int size=6;
void fun(int arr[])
{
int i;
for(i=0;i<size;i++)
{
printf("ARRAY:%d\n",arr[i]);
}}



int main(){
int i;
int a[size];
for(i=0;i<size;i++){
printf("array:\n");
scanf("%d",&a[i]);
fun(a);
}
}         
