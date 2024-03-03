#include <stdio.h>
int main() {
    int n,m,i,j,s=0;
    scanf("%d%d",&n,&m);
    int arr[n][m],sum[n];
    for(i=0;i<=n-1;i++) {
        for(j=0;j<=m-1;j++)
        scanf("%d",arr[i,j]); }
    for(i=0;i<=n-1;i++) {
        for(j=0;j<=m-1;j++)
        s=s+arr[i,j];
        sum[i]=s; }
    return 0; }