#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include "password.c"
int main(int argc,char *argv[]){
   
    char *pass;
    pass=getpass("enter your password:");
    printf("password:%s",pass);
    check_password(pass);
}