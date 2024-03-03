#include <stdio.h>
int main() {
    int n,m; scanf("%d %d",&n,&m);
    int i,j,b[i];
    int a[i][j];
    for (i=0;i<n;i++) {
            b[i]=0; }
    for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                    scanf("%d",&a[i][j]); } }
    for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                    b[i]=b[i]+a[i][j]; } }
    int max=b[0];
    for (i=0;i<n;i++) {
            if (b[i]>max) max=b[i]; }
    printf("%d",a[0][0]);
    return 0; }