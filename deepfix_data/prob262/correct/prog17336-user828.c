#include<stdio.h>
#include<strings.h>
void reverse_arr(int a[10000], int n) {
    int i, t;
    t=a[0];
    a[n-1]=t;
    reverse_arr(a, n-1); }
int main() {
    int n, a[10000],i, k;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    reverse_arr(a, n);
    for(i=0; i<n; i++) {
        printf("%d ", a[i]); }
    return 0; }