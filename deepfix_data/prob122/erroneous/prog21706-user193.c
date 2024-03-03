#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int j;
    int value;
    int count=0;
    scanf("%d",&value);
    for(i=1;i<=n;i++) {
         for(j=1;j<=n;J++) {
         if(((i==j)&&(value==1))||((i!=j)&&(value==0))) {
         count= count+1; } } }
     if(count==n*n) {
     printf("GIVEN nxn matrix is an IDENTITY MATRIX");
     }else{
         printf("GIVEN nxn matrix is NOT an IDENTITY MATRIX"); }
    return 0; }