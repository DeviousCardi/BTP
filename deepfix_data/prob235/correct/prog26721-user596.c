#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i,k;int gap=1;
       scanf("%d",&n);
       gap=n+1;
       for(k=1;k<=n;k++) {
      for(i=1;i<=n-1;i++)
      printf(" ");
      gap--;
      for(i=1;i<=2*k-1;i++)
      printf("*");
      printf("\n"); }
       return 0; }