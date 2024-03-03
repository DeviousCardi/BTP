#include <stdio.h>
int main(){
 int n,i,j;
 scanf("%d",&n); {
     for(i=0;i<n;i++) {
         for(j=0;j==i;j++) {
             if(i+j==n)
             printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
             else
             printf("GIVEN %dx%d mxtrix is NOT an IDENTITY MATRIX",n,n); } } }
    return 0; }