#include <stdio.h>
int main(){
 int n,i,j,a;
 scanf("%d\n",&n);
 for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
         scanf("%d",&a);
         if(i!=j){
             if(a!=0){
                 printf("GIVEN %d * %d matrix is NOT an IDENTITY MATRIX",n,n);
                 exit 0; } }
         else {
             if(a!=1){
                 printf("GIVEN %d * %d matrix is NOT an IDENTITY MATRIX",n,n);
                 exit 0; } } } }
 printf("GIVEN %d * %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }