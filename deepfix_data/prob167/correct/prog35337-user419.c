#include<stdio.h>
long int sum(long int n,long int a[]){
  if(n==0)
  return 0;
  else
  return a[n-1]+sum(a,n-1); }
int main() {
    long int  n ;
    scanf("%ld",&n);
    long int a[n];
    for(int i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    printf("%ld",sum(n,a));
    return 0; }