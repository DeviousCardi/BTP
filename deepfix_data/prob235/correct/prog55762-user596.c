#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,j;
       scanf("%d",&n);
       for(i=1;i<=n;i++) {
           for(j=1;j<=n-i;j++) {
               if(j<(n+1)/2-i)
               printf("%d",j);
               else
               printf("%d",j%10); }
           printf("\n"); }
       return 0; }