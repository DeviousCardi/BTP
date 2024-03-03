#include <stdio.h>
int main() {
    int m,n,sum,i,j ;
    int a[m][n];
    scanf ("%d %d",&m,&n) ;
    for (i=1;i<=m;i++) {
        for (j=1;j<=n;j++) {
            scanf("%d ",&a[i][j]) ;
            printf ("%d ",a[i][j]) ; }
        printf ("\n") ; }
    return 0; }