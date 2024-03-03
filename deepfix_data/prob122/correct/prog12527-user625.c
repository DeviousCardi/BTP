#include <stdio.h>
int main(){
 int n,i,j;
 scanf("%d",&n); {
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++) {
             scanf("%d%d",&i,&j);}}
             if(i==1&&j==1)
             printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
             else
             printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }