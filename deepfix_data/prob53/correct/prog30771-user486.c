#include<stdio.h>
int diff(int arr[],int start,int t)
{ static int diff=0;
  diff=diff-arr[start];
  if(start==t-1) {
      return diff; }
  start++;
  return(arr,start,t); }
int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",diff(arr,1,n-1));
    return 0; }