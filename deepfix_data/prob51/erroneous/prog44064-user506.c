#include <stdio.h>
int main() {
   int N, K, i, j, k;
   scanf("%d %d",&N,&K);
   int a[N];
   int b[N]
   for(i=0;i<N;i++)
   scanf("%d ",&a[i]);
   for(i=0;i<N;i++) {
       int f=0;
       for(j=0;j<N;j++) {
           if(a[j]>=f) {
               f=a[j];
               k=j; } }
       b[i]=a[k];
       a[k]=0; }
   printf("%d",b[K-1]);
    return 0; }