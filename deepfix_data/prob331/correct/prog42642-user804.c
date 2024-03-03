#include <stdio.h>
int main() {
     int i,j,n,a;
     scanf("%d",&n);
     for (i=1;i<=n;i++) {
             for (j =1;j<n;j++)
             scanf("%d",&a);
             if ((i==j&&a ==1)||(i!=j&&a==0))
         printf("GIVEN n x n matrix is an IDENTITY MATRIX");
         else
         printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX"); }
    return 0; }