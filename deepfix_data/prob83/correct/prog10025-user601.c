#include <stdio.h>
int main() {
  int n,i,d;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  scanf("%d",&d);
  for(i=0;i<n;i++) {
      a[i]=a[(i+d+1)%5];
      printf("%d ",a[i]); }
    return 0; }