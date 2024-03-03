#include <stdio.h>
int main(){
 int n,i,j;
 scanf("%d",&n);
 int ar[n][n];
 for(i=0;i<=n-1;i++) {
     for(j=0;j<=n-1;j++) {
         scanf("%d",&ar[i][j]); } }
   for(i=0;i<=n-1;i++) {
     for(j=0;j<=n-1;j++) {
         if(i==j) {
            if(ar[i][j]!=1) {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            goto sos; } }
         else {
             if(ar[i][j]!=0) {
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
            goto sos; } } } }
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 sos:
    return 0; }