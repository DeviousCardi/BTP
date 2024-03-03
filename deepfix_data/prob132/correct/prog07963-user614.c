#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n-1; i++) {
        scanf("%d", &a[i]);
        getchar(); }
    scanf("%d", &a[n]);
    for (int i=0; i<n; i++)
    printf("%c\t", a[i]);
    return 0; }