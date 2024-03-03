#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=(n-1)/2;i++) {
      for(k=n-1;k>=1;k--)
      printf(" ");
      for(j=2*i-1;j<=n;j++)
      printf("*");
      printf("\n"); }
  i=1;
  for(i=1;i<=(n-1)/2+1;i++) {
      for(k=1;k<=n-i;k++)
      printf(" ");
      for(j=1;j<=2*i-1;j++)
      { printf("*"); }
      printf("\n"); }
    return 0; }