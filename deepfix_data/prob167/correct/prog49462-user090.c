#include<stdio.h>
int sum(int a[],int N) {
    int x=0;
    x=x+a;
    return x; }
int main() {
  int N,i,a[100000];
  scanf("%d",&N);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]);
    printf("%d ",sum(a[i],N)); }
    return 0; }