#include <stdio.h>
int main(){
 int n,i,j,k;
 scanf("%d", &n);
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         scanf("%d",&k);
         if((i == j)&&(k != 1)) {
             break; }
         if((i != j)&&(k != 0)){
             break; } }
     if(j != n){
         break; } }
    if(i != n){
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n, n); }
    else{
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n, n); }
    return 0; }