#include <stdio.h>
int main(){
    int n;
    int t = 0;
    int k = 0;
    int rooms[100] = {0};
    int visit[100] = {0};
    scanf("%d", &n);
    int revisit = 0;
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &rooms[i]);
        rooms[i] -= 1; }
    int j = 0;
    for (;;) {
        if (visit[j] == 0) {
            visit[j] = 1;
            j = rooms[j];
            t++;
        } else {
            revisit = j;
            break; } }
    do {
        j = rooms[j];
        k++;
    } while (j != revisit);
    printf("%d %d", t, k);
    return 0; }