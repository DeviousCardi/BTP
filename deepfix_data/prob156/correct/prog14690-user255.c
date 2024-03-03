#include <stdio.h>
int main() {
    int n,m,i,j,a[20][20];
    scanf("%d %d",&n,&m);
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<m ; j++)
        scanf("%d ",&a[i][j]); }
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<m ; j++)
            printf("%d ",a[i][j]); }
return 0; }