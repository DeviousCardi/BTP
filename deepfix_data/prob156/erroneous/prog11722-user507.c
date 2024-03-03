#include <stdio.h>
int main() {
  int i,j,max,sum,n,m ;
  scanf ("%d%d",&n,&m);
  for (i=1;i<=n;i++) {
  sum=0;
  for (j=1;j<=m;j++) {
      scanf ("%d",&k);
      sum=sum+k; }
  if (sum>=max) {
        max =sum; } }
  printf ("%d",max);
    return 0; }