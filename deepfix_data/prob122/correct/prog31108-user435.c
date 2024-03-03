#include <stdio.h>
int main(){
     int n; scanf ("%d",&n);
     int i,j,a,c=0;
     for (i=1;i<=n;i++) {
      for (j=1;j<=n;j++) {
        scanf ("%d",&a);
        if ((i==j&&a==1)||(i!=j&&a==0)) c=c+1; } }
   if (c==n*n) printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
   else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }