#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d%d\n",&n,&m);
    int a[m][n];
    int i,j,k,l;
    int max[m];
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++)
        scanf("%d\n",&a[i][j]); }
    for(k=0;k<m;k++) {
        for(l=1;l<n;l++) {
            if(a[k][l]>a[k][0]) {
                max[k]=a[k][l]; }
            else {
                max[k]=a[k][0]; } } }
    for(k=0;k<m;k++)
    printf("%d",max[k]);
    return 0; }