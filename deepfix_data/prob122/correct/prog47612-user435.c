#include <stdio.h>
int main(){
     int n; scanf ("%d",&n);
     int i,j,a,c=0;
     for (i=1;i<=n;i++) {
      for (j=1;j<=n;j++) {
        scanf ("%d",&a);
        if ((i==j&&a==1)&&(i!=j&&a==0)) c=c+1; } }
   if (c==n*n) printf("GIVEN n x n matrix is an IDENTITY MATRIX");
   else printf("GIVEN n x n matrix is not an IDENTITY MATRIX");
    return 0; }