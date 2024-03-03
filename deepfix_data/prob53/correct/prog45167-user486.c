#include<stdio.h>
long d=0;
long diff(long arr[],int start,int t) {
  d=d-arr[start];
  if(start==t-1) {
      return d; }
  start++;
  return diff(arr,start,t); }
int main() {
    int i,n;
    scanf("%d",&n);
    long arr[n];
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    printf("%ld",arr[0]+diff(arr,1,n));
    return 0; }