#include <stdio.h>
int main() {
    int n, k, big_in, tmp;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<n-1; i++) {
        big_in = i;
        for(int j=i; j<n; j++) {
            if(a[j]>a[big_in]) {
                big_in = j; } }
        tmp = a[i];
        a[i] = a[big_in];
        a[big_in] = tmp; }
    printf("%d", a[k-1]);
    return 0; }