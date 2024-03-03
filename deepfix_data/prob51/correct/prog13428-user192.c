#include <stdio.h>
int main() {
   int n,t;
   int arr[1000000];
   int k;
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++) {
       scanf("%d",&arr[i]); }
   for(int a=1;a<=n-1;a++) {
       for(int j=a;j<=n-a;j++) {
           if(arr[j-1]>=arr[j]) {
              t=arr[j-1];
              arr[j-1]=arr[j];
              arr[j]=t; } } }
   printf("%d",arr[n-k]);
    return 0; }