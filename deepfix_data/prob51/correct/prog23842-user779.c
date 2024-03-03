#include <stdio.h>
int main() {
   int i,j,N,K,a[100000];
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]); }
   for(i=0;i<N-1;i++){
       for(j=0;j<N-1;j++){
       if(a[i]>a[j+1]){
           int p=a[i];
           a[i]=a[i+1];
           a[i+1]=p;
           i++; } } }
   for(i=0;i<N;i++)
   printf("%d ",a[i]);
    return 0; }