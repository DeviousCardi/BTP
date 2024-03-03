#include <stdio.h>
int main() {
   int i,n,j,sum=0;
   scanf("%d",&n);
   for (i=1;i<=n;i++) {
       for(j=1;j<=n;j++) {
          int a;
          scanf("%d",&a);
          if(i==j && a==1) {
              sum=sum+1; }
          if(i!=j&&a==0) {
              sum=sum+1; } } }
        if (sum==n*n) {
            printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
      else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }