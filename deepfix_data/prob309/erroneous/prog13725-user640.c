#include <stdio.h>
int main() {
  int i,n,flag=0,j;
  scanf("%d\n",&n);
  int a[n];
  for (i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for (i=0;i<n;i++) {
      if (a[i]>a[i+1])
      int b=a[i];
      a[i]=a[i+1];
      a[i+1]=b; }
  for (i=0;i<n;i+a[i])
  return 0; }