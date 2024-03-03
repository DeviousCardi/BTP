#include <stdio.h>
int main() {
   int n,k,h[100],i,a=0,j;
   scanf("%d %d ",&n,&k);
   for(i=0;i<n;i++) {
       scanf("%d ",&h[i]); }
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           if(h[i]<h[j]) {
               a=h[j];
               h[j]=h[i];
               h[i]=a; } } }
    printf("%d",h[k]);
    return 0; }