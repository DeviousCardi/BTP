#include <stdio.h>
int main() {
    int n,m,i,j;
      scanf("%d %d",&n,&m);
    int a[m];
  for(i=0;i<n;i++)
  {int sum=0;
       for(j=0;j<m;j++) {
      scanf("%d",&a[j]);
       sum=a[j]+sum; }
        printf("%d ",sum); }
    return 0; }