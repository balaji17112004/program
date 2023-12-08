#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    FILE *fp;
    fp=fopen("index.txt","w");
    char ch[3];
    
    for(i=0;i<sizeof(ch);i++)
    {
        printf("enter the string you want ");
        scanf("%s",&ch);
        printf("%d",ch[i]);
    }
    
    fputs(ch[i],fp);
    

   fclose(fp);
}    

