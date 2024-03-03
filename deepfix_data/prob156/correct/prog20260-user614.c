#include <stdio.h>
int main() {
    int n, m;
    int maxGold=0;
    scanf("%d %d", &n , &m);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            int h_1, h_2, h_3;
            scanf("%d %d %d", &h_1,&h_2, &h_3 );
            int gold= h_1+h_2+h_3;
            if (gold >= maxGold) maxGold=gold; } }
    printf("%d", maxGold);
    return 0; }