#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n-1; i++) {
        char trash;
        scanf("%d", &a[i]);
        trash= getchar(); }
    scanf("%d", &a[n]);
    for (int i=0; i<n; i++)
    printf("%d\t", a[i]);
    return 0; }