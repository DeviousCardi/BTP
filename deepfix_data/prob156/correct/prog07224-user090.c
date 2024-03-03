#include <stdio.h>
int main() {
    int m,n,c,i,j ;
    int sum[n] ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++) {
     scanf("%d",&c);
     sum[1]=0 ;
      sum[j]=sum[j]+c ;
     printf("%d",sum[j]) ; } }
    return 0; }