#include <stdio.h>
int main() {
 int n,i,j,m,c=1,d=1;
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&m);
         if(i==j) {
             if(m!=1)
             c=0;
             break; }
         if(i!=j) {
             if(m!=0)
             d=0;
             break; } } }
 if(c==1&&d==1)
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
 else
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }