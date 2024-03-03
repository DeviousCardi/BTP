#include <stdio.h>
int main() {
    int n,m,i,j;
      scanf("%d %d",&n,&m);
    int a[m],sum[n];
     sum[1]=0;
  for(i=1;i<=n;i++) {
      for(j=1;j<=m;j++) {
      scanf("%d",&a[j]);
       sum[i]=sum[i]+a[j];
       printf("%d ",sum[i]); } }
    return 0; }