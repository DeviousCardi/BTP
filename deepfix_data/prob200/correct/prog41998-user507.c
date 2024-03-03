#include <stdio.h>
int main() {
  int n,k,i,j,max=0;
  scanf ("%d%d\n",&n,&k);
  int arr[n],count[n];
  for (i=1;i<=n;i++) {
      scanf ("%d",&arr[i]); }
  for (i=1;i<=n;i++) {
      for (j=1;j<=n;j++) {
          if (arr[i]>arr[j]) {
              count[i]++; } } }
    if (count[i] =n-1) {
          max =arr[i]; }
  printf ("%d",max);
    return 0; }