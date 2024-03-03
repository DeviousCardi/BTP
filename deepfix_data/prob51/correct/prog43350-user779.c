#include <stdio.h>
int main() {
   int i,j,N,K,a[100000];
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]); }
   for(i=0;i<N-1;i++){
       for(j=0;j<N-1;j++){
       if(a[j]>a[j+1]){
           int p=a[j];
           a[j]=a[j+1];
           a[j+1]=p; } } }
   printf("%d",a[N-K]);
    return 0; }