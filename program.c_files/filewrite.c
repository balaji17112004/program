#include<stdio.h>
#include<stdlib.h>

int main(){
    
    FILE *fp;
    fp=fopen("index.txt","w");
    char ch ='balaji';
    
    fputc(ch,fp);
    

   fclose(fp);
    

}
