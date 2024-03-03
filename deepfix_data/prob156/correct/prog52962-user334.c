#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j;
    int row[m];
    int cum[n];
    for(i=0;i<=n-1;i++) {
        int cum=0;
        for(j=0;j<=m-1;j++) {
            scanf("%d ",&row[j]);
            cum=cum+row[j]; } }
    int u;
    for(u=0;u<=m-1;u++) {
        int v;
        for(v=1;v<=m;v++) {
            if(cum[v]<cum[u]) {
                continue; }
            else {
                break; }
            printf("%d",cum[u]); } }
    return 0; }