#include <stdio.h>
int main(){
 int n,i,j,d=0;
 scanf("%d",n);
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         if(i==j&&i==1) {
             d=0;
         }}}
         if (d==0){
             printf("GIVEN %d*%d matrix is IDENTITY MATRIX",n,n);}
             else{
 printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }