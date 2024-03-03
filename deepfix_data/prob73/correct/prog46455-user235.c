#include <stdio.h>
int main() {
    int m,n,sum,max,i,j ;
    int a[m][n];
    scanf ("%d %d",&m,&n) ;
    sum=0;
    max=0;
    for (i=1;i<=m;i++) {
        for (j=1;j<=n;j++) {
            scanf("%d ",&a[i][j]) ;
            sum = sum + a[i][j] ; }
        if (sum>max) {
            max=sum; }
        sum=0 ; }
    printf ("%d",max) ;
    return 0; }