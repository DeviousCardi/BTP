#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,c,k;int gap;
       scanf("%d",&n);
       gap=n-1;
       for(k=1;k<=n;k++) {
      for(c=1;c<=n-1;c++)
      printf(" ");
      gap--;
      for(c=1;c<=2*k-1;c++)
      printf("*");
      printf("\n"); }
      gap=1;
      for(k=1;k<=n-1;k++) {
      for(c=1;c<=n-1;c++)
      printf(" ");
      gap++;
      for(c=1;c<=2*(n-k)-1;c++)
      printf("*");
      printf("\n"); }
       return 0; }