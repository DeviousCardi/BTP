#include <stdio.h>
int main() {
  int n,i,j,count=1;
  int flag;
  int arr[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
      printf("%d",arr[i]); }
   return 0; }