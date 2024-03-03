#include <stdio.h>
int main() {
    int n,m,i,j;
      scanf("%d %d",&n,&m);
    int a[m],sum[n];
  for(i=0;i<n;i++)
  { for(j=0;j<m;j++) {
      scanf("%d",&a[j]);
       sum[i]=a[j]+sum[i];
      printf("%d",sum[i]); } }
    return 0; }