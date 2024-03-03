#include <stdio.h>
int main()
{   int n,m,i,j,k,max;
    scanf("%d %d\n",&n,&m);
    int a[n][m];
    int sum[n];
    for(j=0;j<n;j++){
        for(i=0;i<m ;i++){
        scanf("%d",&a[j][i]);
        sum[j]=sum[j]+a[j][i]; }
        scanf("\n"); }
printf("%d %d\n",sum[0],sum[1]);
    for(k=0;k<n;k++){
        if (sum[k]>sum[k+1])
           max=sum[k];
        else max=sum[k+1]; }
    printf("%d",max);
    return 0; }