#include <stdio.h>
int main() {
   int n,k;
   scanf("%d %d\n",&n,&k);
   int c[n];
   for(int i=0;i<n;i++)
   scanf("%d ",&c[i]);
   for(int i=0;i<n;i++) {
       int m=c[i];
       int x=i;
       for(int j=i+1;j<n;j++) {
           if(c[i]>m) {
               m=c[i];
               x=i; } }
       int t=c[i];
       c[i]=c[x];
       c[x]=t; }
   printf("%d",c[k-1]);
    return 0; }