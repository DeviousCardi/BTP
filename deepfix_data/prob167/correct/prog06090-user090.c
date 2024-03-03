#include<stdio.h>
int sum(int a[],int N) {
    int add=0 ;
    add=add+a[N];return add;
    return sum(a,N-1); }
int main() {
  int N,i,a[100000];
  scanf("%d",&N);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]);
   }printf("%d ",sum(a,N));
    return 0; }