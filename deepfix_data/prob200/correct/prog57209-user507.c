#include <stdio.h>
int main() {
  int n,k,i,j,max=0;
  scanf ("%d%d\n",&n,&k);
  int arr[n+1],count[n+1];
  for (i=1;i<=n;i++) {
      scanf ("%d",&arr[i]); }
  for (i=0;i<=n;i++) {
      count[i]=0; }
  for (i=1;i<=n;i++) {
      for (j=1;j<=n;j++) {
          if (arr[i]>arr[j]) {
              count[i]++;
              printf ("a"); } } }
      printf ("%d",count[5]);
    if (count[i] ==n-3) {
          max =arr[i]; }
  printf ("%d",max);
    return 0; }