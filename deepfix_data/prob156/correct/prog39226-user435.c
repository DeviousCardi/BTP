#include <stdio.h>
int main() {
    int n,m; scanf("%d%d",&n,&m);
    int i=0,j=0,b[i];
    int a[i][j];
    for (i=1;i<=n;i++) {
            b[i]=0; }
    for (i=1;i<=n;i++) {
            for (j=1;j<=m;j++) {
                    scanf("%d",&a[i][j]); } }
    for (i=1;i<=n;i++) {
            for (j=1;j<=m;j++) {
                    b[i]=b[i]+a[i][j]; } }
    int max=b[1];
    for (i=1;i<=n;i++) {
            if (b[i]>max) max=b[i]; }
    printf("%d",max);
    return 0; }