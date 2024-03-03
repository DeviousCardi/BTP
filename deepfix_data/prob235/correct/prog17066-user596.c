#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,k,j;
       scanf("%d",&n);
       for(i=1;i<=n;i++) {
           for(j=n+1/2;j>=0;j--)
           printf(" ");
           for(k=n-i+1;k<=n+i-1;k++)
           printf("%d",k%10);
           printf("\n"); }
       return 0; }