#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j;
    int row[m];
    int sum[n];
    for(i=0;i<=n-1;i++) {
        int cum=0;
        for(j=0;j<=m-1;j++) {
            scanf("%d ",&row[j]);
            cum=cum+row[j]; }
        sum[i]=cum; }
    int u;
    for(u=0;u<=m-1;u++) {
        printf("%d ",sum[u]); }
    return 0; }