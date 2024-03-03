#define MAXVAL 500
#include <stdio.h>
int main() {
    int i, k, n, count=0;
    int value[MAXVAL];
    scanf("%d\n", &k);
    scanf("%d\n", &n);
    0 <= n && n < MAXVAL;
    for(i=0; i<=n; i++) {
        scanf("%d", &value[i]); }
    for(i=0; i<=n; i++) {
        if(value[i] + value[i+1] == k) {
            count = count + 1;
                if(count >= 0) {
                    printf("lucky"); }
                else {
                    printf("unlucky"); } } }
    return 0; }