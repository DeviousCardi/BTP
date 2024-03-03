#include <stdio.h>
int main() {
    int n,i,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int sum[n];
    int j;
    int max=0;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++)
        scanf("%d",&a[i][j]); }
    for(i=0; i<n; i++) {
        sum[i]=0;
        for(j=0; j<m; j++) {
            sum[i]=sum[i]+a[i][j]; }
        if(sum[i]>max)
        max=sum[i]; }
    printf("%d",max);
    return 0; }