#include<stdio.h>
int sum(int a[],int b);
int main() {
    int N,n[100000];
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&n[i]); }
    int t=sum(n[N],N);
    printf("%d",t);
    return 0; }
int sum(int a[b],int b) {
  if(b==1)
  return(a[0]);
  else
  return(sum(a[b],b)-sum(a[b],b-1)); }