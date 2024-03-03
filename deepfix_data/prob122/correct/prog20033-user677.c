#include <stdio.h>
int main() {
   int n,i,j,m,count=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
       for(j=1;j<=n;j++) {
           scanf("%d",&m);
           if(i==j) {
              if(m!=1) {
                  printf("GIVEN nxn matrix is NOT an IDENTITY MATRIX");
                  return 0; } }
           else if(i!=j) {
               if(m!=0) {
                  printf("GIVEN nxn matrix is NOT an IDENTITY MATRIX");
                  return 0; } } } }
   printf("GIVEN nxn matrix is an IDENTITY MATRIX");
   return 0; }