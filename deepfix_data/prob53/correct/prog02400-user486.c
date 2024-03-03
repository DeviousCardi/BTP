#include<stdio.h>
int diff(int arr[],int start,int t)
{ static int diff=0;
  diff=diff-arr[start];
  if(start==t-1) {
      return diff; }
  start++;
  printf("%d*",diff);
  return(arr,start,t); }
int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",2*arr[0]+diff(arr,0,n-1));
    return 0; }