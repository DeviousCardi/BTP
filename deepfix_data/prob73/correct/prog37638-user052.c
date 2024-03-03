#include <stdio.h>
int main() {
    int n,m,max,j,i,k=2;
    scanf("%d%d",&n,&m);
    int a[n],b[m],sum[n];
    for(j=1;j<=n;j++) {
        sum[j]=0;
    for(i=1;i<=m;i++)
     scanf("%d",&a[i]);
     sum[j]=sum[j]+a[i]; }
    max=sum[1];
    while(k<=n) {
        if(max<=sum[k])
         max=sum[k];
        else
         max=max; }
    printf("%d",max);
    return 0; }