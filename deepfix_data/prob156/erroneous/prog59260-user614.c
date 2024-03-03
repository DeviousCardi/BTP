#include <stdio.h>
int main() {
    int n, m;
    int maxGold=0;
    scanf("%d %d", &n , &m);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            int gold=0;
            int heap;
            scanf("%d", &heap);
            gold= gold +heap; }
        if (gold >= maxGold) maxGold=gold; }
    printf("%d", maxGold);
    return 0; }