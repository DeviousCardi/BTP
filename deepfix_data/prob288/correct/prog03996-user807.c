#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,q=1;
    scanf("%d",&n);
 for(i=1;i<=((2*n+1)/2)+1;i++) {
    for(k=1;k<=(((n+1)/2));k++)
    {printf(" ");}
     if(q%2){
     for(j=1;j<=q;j++){
         printf("X");
         printf("*"); }
     q=q+1;
 printf("\n"); } }
return 0; }