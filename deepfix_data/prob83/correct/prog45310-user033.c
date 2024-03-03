#include <stdio.h>
int main() {
    int n,k,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    scanf("%d", &k);
    swap(a[n],k,n);
    for(i=0;i<n;i++) {
        printf("%d", a[i]); }
    return 0; }
int swap(int a[],int k, int n) {
    int i,t;
    for(i=0;i<k;i++) {
        a[i] = t;
        a[i] = a[n-k+i];
        a[n-k+1] = t; }
    return i; }