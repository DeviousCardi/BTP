#include<stdio.h>
#include<strings.h>
int reverse_arr(int a[1000], int n) {
    int i, t;
    t=a[n-1];
    a[0]=t;
    return reverse_arr(a, n-1); }
int main() {
    int n, a[10000],i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    reverse_arr(a, n);
    for(i=0; i<n; i++) {
        printf("%d ", a[i]); }
    return 0; }