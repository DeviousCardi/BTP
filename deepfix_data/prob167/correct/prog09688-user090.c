#include<stdio.h>
int sum(int a[],int N) {
    if(N==0)return 0;
    if(N==1)return a[N];
    return a[N]+sum(a,N-1); }
int main() {
  int N,i,a[100000];
  scanf("%d",&N);
   for(i=0;i<=N;i++) {
       scanf("%d",&a[i]);
   }printf("%d ",sum(a,N));
    return 0; }