#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,j;
       scanf("%d",&n);
       for(i=1;i<=(n+1)/2;i++) {
           for(j=1;j<((n+1)/2)+i-1;j++) {
               if(j<=(n+1)/2-i)
               printf(" ");
               else
               printf("%d",j%10); }
           printf("\n"); }
       return 0; }