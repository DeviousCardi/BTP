#include <stdio.h>
int main() {
 int n,a,i,j,f=1,k=0;
 scanf("%d\n",&n);
 for(i=0;i<=n;i=i+1) {
        for(j=0;j<=n;j++) {
        scanf("%d ",&a);
          if(i==j) {
             if(a==1)
             k++;
             else
             k=k; }
         if(i!=j) {
             if(a==0) {
                 k++; }
             else {
                 k=k; } } } }
    return 0; }