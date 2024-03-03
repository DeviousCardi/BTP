#include <stdio.h>
int main() {
    int n, m, sum,i, j, k;
    scanf ("%d %d\n", &m, &n);
    int a[m][n], max[m];
    for(i=0; i<m, i++) {
        for(j=0; j<n; j++) {
            scanf("%d"; &a[i][j]); } }
    for(i=0; i<m; i<n) {
        sum=0;
        for(j=0; j<n; j++) {
            sum=sum+a[i][j]; }
        max[i]=sum; }
    max=0;
    for(i=0; i<m; i++) {
          if(max[i+1]>max[i])
          max=max[i+1]; }
    printf("%d", max);
    return 0; }