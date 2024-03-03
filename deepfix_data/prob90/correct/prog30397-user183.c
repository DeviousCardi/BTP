#define MAXVAL 1000
#include <stdio.h>
int main() {
    int i, j, k, n, count;
    int value[MAXVAL];
    scanf("%d", &k);
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        scanf("%d", &value[i]); }
    for(i=0, j=0; i<=n, j<=n; i++) {
        count = 0;
        if(value[i] + value[i+j] == k) {
            count = count + 1;
                if(count > 0) {
                    printf("lucky"); }
                else {
                    printf("unlucky"); } } }
    return 0; }