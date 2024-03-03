#include <stdio.h>
int main(){
   int n,i,j,p,flag=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
       for(j=1;j<=n;j++) {
           scanf("%d",&p);
           if(((i==j)&&(p==1))||((i!=j)&&(p==0))) {
               if(i==n && j==n) {
                   printf("IDENTITY MATRIX"); } }
           else {
               printf("NOT IDENTITY MATRIX");
               flag=1;
               break; } }
       if(flag==1)
       break; }
    return 0; }