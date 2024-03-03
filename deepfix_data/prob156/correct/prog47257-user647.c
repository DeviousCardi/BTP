#include <stdio.h>
int main()
{   int n,m,i,j,k,max;
    scanf("%d %d\n",&n,&m);
    char d=n;
    int a[n][m];
    int sum[n];
    for(j=0;j<n;j++){
        sum[j]=0;
        for(i=0;i<m ;i++){
        scanf("%d ",&a[j][i]);
        sum[j]=sum[j]+a[j][i]; }
        scanf("\\\%c",&d); }
    for(k=1;k<n;k++){
        max=sum[0];
        if (sum[k]>max)
           max=sum[k]; }
    printf("%d",max);
    return 0; }