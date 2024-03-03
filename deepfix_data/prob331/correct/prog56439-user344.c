#include <stdio.h>
int main(){
 int n, i, j, flag, m;
 scanf("%d", &n);
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         scanf("%d", &m);
         if(((i==j)&&(m==1))||((i!=j)&&(m==0))){
             flag=1; }
         else{
             flag=0;break; } } }
    if(flag==1){
        printf("GIVEN %d*%d is an IDENTITY MATRIX", n, n); }
    else{
        printf("GIVEN %d*%d is an NOT an IDENTITY MATRIX", n, n); }
    return 0; }