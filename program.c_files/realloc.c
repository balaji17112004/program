#include<stdio.h>
#include<stdlib.h>
void main(){
int i,*ptr,n=5;
ptr=(int*)calloc(n,sizeof(int));
if(n=='\0'){
    printf("the memory block is not created by calloc()");
}
else{
    printf("the memory block is created by calloc()");

    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
        
    }
    for(i=0;i<n;i++){
        printf("\n %d",ptr[i]);
    }
    int n=10;
    ptr=(int*)realloc(n,sizeof(int));
    
    for(i=6;i<n;i++)
    {
        ptr[i]=i+1;
        
    }
    printf("the whole elements are\n");
    for(i=0;i<n;i++){
        printf("\n %d",ptr[i]);
    }
    free(ptr);

}

}
