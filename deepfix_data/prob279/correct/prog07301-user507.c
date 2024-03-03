#include <stdio.h>
int main() {
  int n,i,j,flag=0;
  scanf ("%d\n",&n);
  int arr[n],count[n];
  for (i=1;i<=n;i++) {
      scanf("%d",&arr[i]); }
  arr[0]=0;
  for (i=0;i<=n;i++) {
      count[i]=0; }
  for (i=1;i<=n;i++) {
      for (j=1;j<=n;j++) {
          if (i==arr[j]) {
              count[i]++; } } }
  for (i=1;i<=n;i++) {
  if (count[i]==2) {
      printf ("%d\n",i); }
  else if (count[i]==0) {
      printf ("%d",i); } }
  return 0; }