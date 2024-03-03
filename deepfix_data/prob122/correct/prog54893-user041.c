#include <stdio.h>
int main(){
 int n,i,j,x,count;
 scanf("%d",&n);
 for(j=1;j<=n;j++) {
     for(i=1;i<=n;i++) {
         scanf("%d",&x);
     if(i==j && x!=1) {
       count=count+1; }
       else if(i!=j && x!=0) {
           count=count+1; } }
 printf("\n"); }
 if(count!=0) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    else
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }