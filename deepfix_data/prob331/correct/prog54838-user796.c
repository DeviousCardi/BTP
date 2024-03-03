#include <stdio.h>
int main(){
 int n,i,j,a,d=0;
 int e=1;
 scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("\n%d",&a);
       if(i==j&&a==1){
           d=0;}
           if(i!=j&&a!=0){
               e=1; }
       }}
        if(d==0&&e==1) {
 printf("given matrix is identity"); }
         else  {
             printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX"); }
    return 0; }