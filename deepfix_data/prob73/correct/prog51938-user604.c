#include <stdio.h>
int main() {
    int n ,m,i,j,g[200],x ,sum[200];
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
     {  sum[i]=0;
       for(j=0;j<m;j++)
     {scanf("%d",&g[j]);
     sum[i]=sum[i]+g[j];
     }}
      x=sum[1];
      for(i=2;i<=n;i++)
    {if(x<sum[i])
    x=sum[i];}
    printf("%d",x);
    return 0; }