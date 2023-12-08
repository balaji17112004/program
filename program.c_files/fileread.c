#include<stdio.h>
#include<stdlib.h>
char ch;
void main(){
    FILE *fp;
    fp=fopen("index.txt","r");
    if(fp==NULL){
        printf("Error, file doesn't exist");
        exit(1);
    }
    else{
        while(1)
        {
            ch=fgetc(fp);
            if(ch!=EOF)
            {
               printf("%c",ch);
            }
            else{
                break;
            }
        }fclose(fp);
    }
}
