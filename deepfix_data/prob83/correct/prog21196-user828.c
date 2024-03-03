#include <stdio.h>
void rot_arr(int a[100], int n);
int main() {
    int a[100], i, n, d;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    scanf("%d", &d);
    for(i=1; i<=n-d; i++) {
        rot_arr(a, n); }
    for(i=0; i<n; i++) {
        printf("%d", a[i]); }
    return 0; }
void rot_arr(int a[], int n) {
    int i,m;
    m=a[0];
    for(i=0; i<n-1; i++) {
        a[i]=a[i+1]; }
    a[n-1]=m; }