#include <stdio.h>
int swap(int a[],int k, int n) {
    int i,t,j;
    for(i=0;i<k;i++) { }
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
        printf("%d ", a[i]); }
    return 0; }