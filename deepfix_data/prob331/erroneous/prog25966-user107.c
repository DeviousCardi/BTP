#include <stdio.h>
int main() {
 int n,i=0,j=0,f[i][j];
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&f[i][j]);
         if((i=j&&f[i][j]==1)&&(i!=j&&f[i][j]==0)) } }
  printf("given %dX%d matrix is an IDENTITY MATRIX",n,n);
    return 0; }