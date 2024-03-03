#include <stdio.h>
int main(){
 int n,i,j,d=0;
 int e=1;
 scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&j); }
        scanf("\n"); }
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++){
        if(i!=j&&i!=0&&j!=0){
            d=0;}
        if(i==j&&i==1){
            e=1;}}}
        if(d==0){
 printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n); }
         else if(d==0&&e==1){
             printf("given matrix is identity"); }
    return 0; }