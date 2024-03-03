#include<stdio.h>
int sum(long a[],long b);
int main() {
    long N,n[100000];
    scanf("%f",&N);
    for(long i=0;i<N;i++) {
        scanf("%f",&n[i]); }
    long t=sum(n,N);
    printf("%f",t);
    return 0; }
int sum(long a[],long b) {
  if(b==1)
  return(a[0]);
  else
  return(sum(a,b-1)-a[b-1]); }