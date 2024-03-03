#include <stdio.h>
int sum(int arr[], int n) {
    if(n==0);
    return 0;
    else {
        return(arr[n]+sum(arr, n-1)); } }
int main() {
    int count=0
  int n,s,i,arr[30];
  scanf("%d%d",&n,&s);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]);
      count=sum(arr[i], n); }
    if(count==s) {
        printf("YES"); }
      else
      printf("NO");
    return 0; }