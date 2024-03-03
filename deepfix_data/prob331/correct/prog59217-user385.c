#include <stdio.h>
int main() {
 int n,a,i,j,k=0;
 scanf("%d\n",&n);
 for(i=0;i<=n;i=i+1) {
        for(j=0;j<=n;j++) {
        scanf("%d ",&a);
          if(i==j) {
             if(a==1)
             k++; }
         if(i!=j) {
             if(a==0) {
                 k++; } } } }
   if(k==n)
   {         printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
   else {
         printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }