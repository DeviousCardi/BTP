#include <stdio.h>
int main() {
    int n,m,a[20][20],sum[i],max;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) {
        sum[i]=0;
        for(int j=1;j<=m;j++)
        {  scanf("%d",&a[i][j]);
           sum[i]=sum[i]+a[i][j]; } }
    for(int i=2;i<=n;i++)
    {max=sum[1];
     if(sum[i]>max)
     max=sum[i]; }
    for(int i=1;i<=n;i++)
    printf("%d",max);
    return 0; }