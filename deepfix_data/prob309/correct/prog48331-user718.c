#include <stdio.h>
int count( int n, int a[]) {
    int c = 0;
    for(int i = 0; i < n; i++)
        if (a[i] == n)
            c++;
    return c; }
int main() {
    int n, test = 0, hold = 0;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &a[0]);
    for(int i = 1; i < n; i++)
        scanf(",%d", &a[i]);
    for(int i = 0; i < n; i++) {
        hold = count(a[i], a);
        if (hold != a[i]) {
            test++;
            break; } }
    if (test == 0)
        printf("Yes");
    else
        printf("No");
    return 0; }