#include <stdio.h>
int main(){
    int nextr[101] = {0};
    int vis[101] = {0};
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &nextr[i]); }
    int t = 0; int k = 0;
    for (i = 1; i <= n; ++i) {
        if (vis[i] == 1) {
            printf("%d ", t);
            break; }
        t++; }
    printf("%d", k);
    return 0; }