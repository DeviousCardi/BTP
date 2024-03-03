#include <stdio.h>
int main(){
 int n,i,j,k,count;
 scanf ("%d",&n);
 for (i=1;i<=n;i++) {
     for (j=1;j<=n;j++) {
         scanf ("%d",&k);
         if (i==j&&k==1) {
             count++ ; }
         else if (i!=j&&k==0) {
             count++; } }
 if (count==n*n)
 printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX ");
 else
  printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX ");
    return 0; }