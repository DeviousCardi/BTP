#define MAXVAL 499
#include <stdio.h>
int main() {
    int i, k, n;
    int value[MAXVAL];
    scanf("%d %d", &k, &n);
    for(i=0; i<=n; i++) {
        scanf("%d", &value[i]); }
    for(i=0; i<=n; i++) {
        if(value[i] + value[i+1] == k) {
            printf("lucky"); }
        else {
            printf("unlucky"); } }
    return 0; }