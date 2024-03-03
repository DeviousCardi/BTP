#include <stdio.h>
int main(){
 int n,i,j,x;
 scanf("%d",&n);
 for(j=1;j<=n;j++) {
     for(i=1;i<=n;i++) {
         scanf("%d",&x);
     if(i==j && x!=1) {
         printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
       break; }
       else if(i!=j && x!=0) {
          printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
           break; } }
 if(i==j && x!=1) {
       break; }
       else if(i!=j && x!=0) {
           break; }
 printf("\n"); }
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }