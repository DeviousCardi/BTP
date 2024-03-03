#define MAXNUM 100
#include <stdio.h>
int main() {
    int books[MAXNUM], position[MAXNUM];
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%d", &books[i]); }
    for (j=1; j<=n; j++) {
        scanf("%d", &position[j]); }
    for(j=1; j<=n; j++) {
        i = 1;
        printf("%d ", books[i]);
        i = 1 + j; }
    printf("end");
    return 0; }