#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,a[m][n],x;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]); }
    printf("%d",a[i][j]);
    return 0; }