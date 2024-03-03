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
            printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX");
            exit(0);
            }}
        else{
             if(x!=0){
             printf("GIVEN 3 x 3 matrix is NOT an IDENTITY MATRIX");
        exit(0);} } } }
 printf("GIVEN 3 x 3  matrix is  an IDENTITY MATRIX");
    return 0; }