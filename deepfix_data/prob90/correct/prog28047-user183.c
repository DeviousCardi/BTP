#define MAXVAL 1000
#include <stdio.h>
int main() {
    int i, j, k, n, count;
    int value[MAXVAL];
    scanf("%d", &k);
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        scanf("%d", &value[i]); }
    for(i=0; i<=n; i++) {
        count = 0;
        while(j>=(i+1)) {
            if(value[i] + value[j] == k) {
                count = count + 1; }
            j++; } }
            if(count > 0)
            printf("lucky");
            else
            printf("unlucky");
    return 0; }