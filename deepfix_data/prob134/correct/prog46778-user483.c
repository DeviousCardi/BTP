#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k) {
        return 0; }
     if(((n==0)&&(k==0))) {
        return 1; }
                 else if(k==0) {
                     return 1; }
  else
return B(n-1,k)+B(n-1,k-1); }
    int main() {
    int n,k,b,p=0;
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
          for(k=0;k<=20;k++) {
              if(B(n,k)==b) {
             printf("%d %d",n,k);
              p=1;
         break; }
    if(p==1) {
    break; } }
            } if(p==0) {
      printf("-1"); }
 return 0; }