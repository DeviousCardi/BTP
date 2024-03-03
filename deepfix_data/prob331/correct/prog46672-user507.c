#include <stdio.h>
int main(){
 int n,i,j,k,count=0;
 scanf ("%d",&n);
 for (i=1;i<=n;i++) {
     for (j=1;j<=n;j++) {
         scanf ("%d",&k);
         if (i==j&&k==1) {
             count++ ; }
         else if (i!=j&&k==0) {
             count++; } } }
 if (count==n*n)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX ",n,n);
 else
  printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX ",n,n);
    return 0; }