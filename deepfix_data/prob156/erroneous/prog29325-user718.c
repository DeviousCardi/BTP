#include <stdio.h>
int main() {
    int n, m, sum1, sum, gold;
    scanf("%d%d", &n, &m)
    for( int i = 1; i  <= n; i++) {
        for(int j =1; j <= m; j++) {
            scanf("%d", &gold);
            sum1 = sum1 + gold; }
        if (sum1 > sum) {
            sum = sum1; } }
    printf("%d", sum);
    return 0; }