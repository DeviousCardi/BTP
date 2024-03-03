#include <stdio.h>
int main() {
    int n,m,i,j;
      scanf("%d %d",&n,&m);
    int a[m],sum[n];
  for(i=1;i<=n;i++)
  { sum[1]=0;
      for(j=1;j<=m;j++) {
      scanf("%d",&a[j]);
       sum[i]=sum[i]+a[j];
    }  }
   { for(i=2;i<=n;i++)
    printf("%d",&sum[i]); }
    return 0; }