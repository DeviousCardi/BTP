#include <stdio.h>
int main()
{   int n,m,i,j,k,max;
    scanf("%d %d\n",&n,&m);
    char c=n;
    int a[n][m];
    int sum[n];
    for(j=0;j<n;j++){
        sum[j]=0;
        for(i=0;i<m ;i++){
        scanf("%d ",&a[j][i]);
        sum[j]=sum[j]+a[j][i]; }
        scanf("\&c",&c); }
    for(k=0;k<n;k++){
        if (sum[k]>sum[k+1])
           max=sum[k];
        else max=sum[k+1]; }
    printf("%d",max);
    return 0; }