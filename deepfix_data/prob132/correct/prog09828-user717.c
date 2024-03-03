#include <stdio.h>
int main() {
  char c;
  int n,i;
  scanf("%d\n",&n);
  int a[n];
  for(i=0;i<n;i++) {
  scanf("%d",&a[i]);
  scanf("%c",&c); }
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
    return 0; }