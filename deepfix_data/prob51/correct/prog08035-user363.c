#include <stdio.h>
int main() {
   int n,k,h[100],i,a=0;
   scanf("%d %d ",&n,&k);
   for(i=0;i<n;i++) {
       scanf("%d ",&h[i]); }
   for(i=0;i<n;i++) {
       if(h[i]<h[i+1]) {
           a=h[i+1];
           h[i+1]=h[i];
          h[i]=a; } }
    printf("%d",h[k]);
    return 0; }