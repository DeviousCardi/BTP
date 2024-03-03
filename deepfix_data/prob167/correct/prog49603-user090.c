#include<stdio.h>
int sum(int a[],int N) {
    int x=0,i;
    for(i=0;i<N;i++)
       x=x+a[i];
    return x; }
int main() {
  int N,i,a[100000];
  scanf("%d",&N);
   for(i=0;i<N;i++) {
       scanf("%d",&a[i]);
    printf("%d ",sum(a,N)); }
    return 0; }