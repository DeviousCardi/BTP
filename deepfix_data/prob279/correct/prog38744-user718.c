#include <stdio.h>
void sort(int n, int a[]) {
    int temp, c;
    for(int j = 0; j < n-c; j++) {
        for(int i = 0; i < n - 1; i++) {
            if(a[i+1]<a[i]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp; } }
        c++; } }
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(n, a);
    for(int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    for(int i = 0; i < n-1; i++) {
        if(a[i] == a[i+1])
            printf("%d\n", a[i]); }
    for(int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0; }