#include <stdio.h>
int main() {
   int i,N,K,a[100000];
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]); }
   for(i=0;i<N;i++){
       if(a[i]>a[i+1]){
           int p=a[i];
           a[i]=a[i+1];
           a[i+1]=p; } }
   for(i=0;i<N;i++)
   printf("%d",a[i]);
    return 0; }