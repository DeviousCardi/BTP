#include <stdio.h>
int main() {
    int n, m, gold, max, sum=0;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            scanf("%d", &gold);
            sum=sum+gold; }
        max=(max>=sum)?max:sum;
        sum=0; }
    printf("%d", max);
    return 0; }