#include <stdio.h>
int main() {
    int n,m,a[20][20],sum[20],max;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) {
        sum[i]=0;
        for(int j=1;j<=m;j++)
        {  scanf("%d",&a[i][j]);
           sum[i]=sum[i]+a[i][j]; } }
        max=sum[1];
    for(int i=2;i<=n;i++)
    {    if(sum[i]>max)
         max=sum[i]; }
    printf("%d",max);
    return 0; }