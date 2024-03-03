#include <stdio.h>
int main(){
 int n,count=0,a,i,j;
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++) {
             scanf("%d",&a);
             if(a==1 && i==j) {
                 count++; }
             else if(a==0 && i!=j) {
                 count++; } } }
    if(count==n*n) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    else {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }