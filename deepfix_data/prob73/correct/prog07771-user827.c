#include <stdio.h>
int main() {
    int n,m,i,j,big;
    scanf("%d%d",&n,&m);
    int a[n][m],s[n];
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&a[i][j]); } }
    for(i=1;i<=n;i++) {
        s[i]=0; }
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            s[i]=s[i]+a[i][j]; } }
    for(i=1;i<=n;i++) {
        printf("\n%d",s[i]); }
    return 0; }