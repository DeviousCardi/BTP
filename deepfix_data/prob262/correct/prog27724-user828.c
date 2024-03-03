#include<stdio.h>
#include<strings.h>
int reverse_arr(int a[], int n) {
    int i, t;
    t=a[0];
    a[n-1]=t;
    return reverse_arr(a, n-1); }
int main() {
    int n, a[10000],i, k;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    k=reverse_arr(a, n);
    printf("%d", k);
    return 0; }