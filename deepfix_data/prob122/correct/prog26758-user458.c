#include <stdio.h>
int main(){
 int n;
 scanf("%d\n",&n);
 int i,j,x;
 for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
         scanf("%d ",&x);
         if(i==j){
             if(x!=1){
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n           );
            exit(0);
            }}
        else{
     if(x!=0){
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
        exit(0);} } } }
 printf("GIVEN %d x %d  matrix is an IDENTITY MATRIX",n,n);
    return 0; }