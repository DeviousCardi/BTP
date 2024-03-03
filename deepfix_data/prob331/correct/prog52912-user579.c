#include <stdio.h>
int main() {
 int n,i,j,m,c=1,d=1;
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&m);
         if(i==j) {
             if(m!=1)
            { printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             return 0;} }
         if(i!=j) {
             if(m!=0)
          {   printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             return 0; } } } }
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }