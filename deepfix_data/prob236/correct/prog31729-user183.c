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
    for(j=1, i=1; j<=n, i<=n; j++, i++) {
        i = j;
        printf("%d ", books[i]); }
    printf("end");
    return 0; }