#include <stdio.h>
int main() {
  int n,a[100],i,d,j;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  scanf("%d ",&a[i]);
  scanf("%d",&d);
  for(j=(n-d);j<n;j++)
  printf("%d ",a[j]);
  for(i=0;i<(n-d);i++)
  printf("%d ",a[i]);
    return 0; }