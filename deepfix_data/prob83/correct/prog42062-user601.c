#include <stdio.h>
int main() {
  int n,i,d,c,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  scanf("%d",&d);
  for(j=0;j<d;j++) {
   for(i=n-1;i>0;i--) {
      c=a[n-1];
      a[i]=a[i-1];
      a[0]=c; } }
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
    return 0; }