#include <stdio.h>
int main() {
    int n,m,i,j,sum=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=1;i<=n;i++) {
           for(j=1;j<=m;j++) {
                  scanf("%d",&a[n][m]); } }
    for(i=1;i<=n;i++) {
           for(j=1;j<=m;j++) {
                  sum=sum+a[n][m]; } }
    printf("%d",sum);
    return 0; }