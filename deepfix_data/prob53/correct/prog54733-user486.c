#include<stdio.h>
int d=0;
int diff(int arr[],int start,int t) {
  d=d-arr[start];
  if(start==t-1) {
      return d; }
  start++;
  return diff(arr,start,t); }
int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",arr[0]+diff(arr,1,n-1));
    return 0; }