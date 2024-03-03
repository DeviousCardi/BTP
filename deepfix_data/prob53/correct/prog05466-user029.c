#include<stdio.h>
int sum(long a[],long b);
int main() {
    long N,n[10000000];
    scanf("%ld",&N);
    for(long i=0;i<N;i++) {
        scanf("%ld",&n[i]); }
    long t=sum(n,N);
    printf("%ld",t);
    return 0; }
int sum(long a[],long b) {
  if(b==1)
  return(a[0]);
  else
  return(sum(a,b-1)-a[b-1]); }