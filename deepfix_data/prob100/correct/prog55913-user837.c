#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d%d",&n,&m);
    int a[m][n];
    int i,j,k,l;
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]); }
    for(k=1;k<=m;k++) {
        for(l=1;l<=n;l++) {
            if(a[k][l]>a[k+1][l+1]) {
                printf("%d",a[k][l]); }
            else {
                printf("%d",a[k+1][l+1]); } } }
    return 0; }