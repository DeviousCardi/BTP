#define MAXVAL 1000
#include <stdio.h>
int main() {
    int i, k, n, count;
    int value[MAXVAL];
    scanf("%d", &k);
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        scanf("%d", &value[i]); }
    for(i=0; i<=n; ++i) {
        count = 0;
        if(value[i] + value[i+1] == k) {
            count = count + 1;
                if(count > 0) {
                    printf("lucky"); }
                else {
                    printf("unlucky"); } } }
    return 0; }