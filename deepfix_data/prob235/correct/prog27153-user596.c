#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,k,j;
       scanf("%d",&n);
       for(i=1;i<=n;i++) {
           for(j=0;j<n-i;j--)
           printf(".");
           for(k=(n+i)/2;k<=n+i-1;k++)
           printf("%d",k%10);
           printf("\n"); }
       return 0; }