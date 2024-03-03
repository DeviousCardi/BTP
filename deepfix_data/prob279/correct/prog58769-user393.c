#include <stdio.h>
int main() {
  int n,i,j;
  int a[10000];
  a[0]=0;
  scanf("%d",&n);
  for (i=1;i<=n;i++) {
      scanf("%d",&a[i]); }
  for(i=1;i<=n;i++) {
      if(a[i]!=i)
      printf("%d",a[i]); }
    return 0; }