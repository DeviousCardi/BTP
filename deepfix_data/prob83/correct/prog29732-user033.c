#include <stdio.h>
int swap(int a[],int k, int n) {
    int i,t;
    for(i=0;i<k;i++) {
        t = a[i];
        a[i] = a[n-k+i];
        a[n-k+i] = t; }
    return i; }
int main() {
    int n,k,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    scanf("%d", &k);
    swap(a,k,n);
    for(i=0;i<n;i++) {
        printf("%d", a[i]); }
    return 0; }