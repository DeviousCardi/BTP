#include <stdio.h>
int main() {
    int n,m,i,j;
      scanf("%d %d",&n,&m);
    int a[m],sum[n];
  for(i=0;i<n;i++) {
      sum[0]=0;sum[1]=0;
      for(j=0;j<m;j++) {
      scanf("%d",&a[j]);
       sum[i]=sum[0]+a[j];
    }   printf("%d",sum[i]); }
    return 0; }