#include <stdio.h>
int main() {
  int n,i,d,c,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  scanf("%d",&d);
  for(j=0;j<d;j++) {
   for(i=0;i<n;i++) {
      c=a[i];
      a[i]=a[(i+1)%n]; } }
  for(i=0;i<n;i++)
  printf("%d",a[i]);
    return 0; }