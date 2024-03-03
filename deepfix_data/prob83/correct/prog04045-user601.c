#include <stdio.h>
int main() {
  int n,i,d,e;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  scanf("%d",&d);
  printf("%d",d);
  for(i=0;i<n;i++) {
      e=(i+d)%n;
      a[i]=a[e];
      printf("%d ",a[i]); }
    return 0; }