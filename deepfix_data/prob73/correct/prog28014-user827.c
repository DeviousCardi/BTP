#include <stdio.h>
int main() {
    int n,m,i,j,big;
    scanf("%d%d",&n,&m);
    int a[n+1][m+1],s[n];
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&a[i][j]); } }
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            printf("%d",a[i][j]); } }
    return 0; }