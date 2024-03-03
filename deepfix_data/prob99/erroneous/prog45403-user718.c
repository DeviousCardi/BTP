#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n], count;
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0, j < 0; j++) {
            if( a[j] < a[i]) {
                count++; } }
        b[i] = count; }
    count = 0;
    for(int i = 0; i < n; i++) {
        if (b[i] > count) {
            count = b[i]; } }
    printf("%d", count);
    return 0; }