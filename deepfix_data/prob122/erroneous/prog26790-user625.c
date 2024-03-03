#include <stdio.h>
int main(){
 int n,i,j,x,count;
 scanf("%d",&n);
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++) {
             scanf("%d",&x);
             if(i==j&&x==1)
             count++
             if(i!=j&&x==0)
             count++; } }
     if(count==n*n)
     printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
     if(count!=n*n)
     printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }