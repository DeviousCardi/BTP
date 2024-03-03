#include <stdio.h>
int main(){
   int n,i,j,p;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
       for(j=1;j<=n;j++) {
           scanf("%d",&p);
           if(((i==j)&&(p==1))||((i!=j)&&(p==0))) {
               if(i==n && j==n) {
                   printf("IDENTITY MATRIX"); } }
           else {
               printf("NOT IDENTITY MATRIX"); } } }
    return 0; }