#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d %d\n",&n,&m);
    int i,j,a[m+1][n+1];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            printf("%d\n",a[i][j]); } }
    return 0; }