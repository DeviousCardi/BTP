#include <stdio.h>
int main() {
    int n,m,a[n][m],i,j,sum=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) {
           for(j=1;j<=m;j++) {
                  scanf("%d",&a[n][m]); } }
    for(i=1;i<=n;i++) {
           for(j=m;j<=m;j++) {
                  sum=sum+a[i][j]; } }
    return 0; }