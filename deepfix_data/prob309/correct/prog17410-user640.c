#include <stdio.h>
int main() {
  int i,n,b,flag=2,count=0,j;
  scanf("%d\n",&n);
  int a[n];
  for (i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for (j=0;j<n;j++) {
     for (i=0;i<n-1;i++) {
        if (a[i]>=a[i+1]) {
          b=a[i];
          a[i]=a[i+1];
          a[i+1]=b; } } }
  for (i=0;i<n;i++) {
      printf("%d,",a[i]); }
  return 0; }