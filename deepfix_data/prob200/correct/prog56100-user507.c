#include <stdio.h>
int main() {
  int n,k,i,j,max;
  scanf ("%d%d\n",&n,&k);
  int arr[n];
  for (i=1;i<=n;i++) {
      scanf ("%d",&arr[i]); }
  for (i=1;i<=n;i++) {
      for (j=1;j<=n;j++) {
          if (arr[i]<arr[j]) {
              break ;
              max=arr[i]; } } }
  printf ("%d",max);
    return 0; }