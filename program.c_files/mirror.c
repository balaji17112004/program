
#include <stdio.h>  
void main(){
int i,j,n,s,l;
printf("Enter a rows: ");
scanf("%d",&n);
for(i=-n;i<=n;i++)
{
if(i<0)
l=-i;
else
l=i;
for(s=0;s<n-l;s++)
printf("     ");
for(j=0;j<l+1;j++)
printf("JANANI      ");
printf("\n");
}}  
