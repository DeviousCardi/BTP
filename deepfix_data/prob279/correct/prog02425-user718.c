#include <stdio.h>
void sort(int n, int a[]) {
    int temp, c;
    for(int j = 0; j < n-1; j++) {
        for(int i = 0; i < n - 1; i++) {
            if(a[i+1]<a[i]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp; } } } }
int count( int n, int a[], int num) {
    int c = 0;
    for(int i = 0; i < n; i++)
        if (a[i] == num)
            c++;
    return c; }
int main() {
    int n, hold;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for( int i = 1; i <= n; i++) {
        hold = count(n, a, i);
        if ( hold == 2)
            printf("%d\n", i); }
    for( int i = 1; i <= n; i++) {
        hold = count(n, a, i);
        if ( hold == 0)
            printf("%d", i); }
    return 0; }