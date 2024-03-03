#include <stdio.h>
int main() {
 int n,m;
 int sum[100];
 scanf("%d%d",&n,&m);
 int a[100];
 for(int i=0;i<n;i++)
 {sum[i]=0;
  for(int j=0;j<m;j++)
  {scanf("%d",&a[j]);
   sum[i]=sum[i]+a[j]; } }
 int large=sum[0];
 for(int u=1;u<n;u++)
 {if(sum[u]>large)
  {large=sum[u];} }
 printf("%d",large);
    return 0; }