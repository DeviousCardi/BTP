#include <stdio.h>
int main(){
 int a,n,i,j;
 scanf("%d\n",&n);
 for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
         scanf("%d",&a);
         if(i==j){
           if(a==1){
             continue;}
             else{
             printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
             return 0; } }
         else{
             if(a==0){
             continue;}
             else{
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
                 return 0; } } } }
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }