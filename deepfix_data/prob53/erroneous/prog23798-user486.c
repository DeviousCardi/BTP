#include<stdio.h>
int diff(int arr[],int t)
{ static int diff=0;
  diff=diff-arr[t-1];
  if(t==1)
  {printf("%d",diff);
      return 0; }
  return(arr[],t-1); }
int main() {
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    diff(arr,n);
    return 0; }