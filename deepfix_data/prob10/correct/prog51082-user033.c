#include<stdio.h>
int Max(int a[], int n) {
    int i,j;
    int count = 1;
    int max = 0;
    for(i=0;i<n;i++) {
        for(j=(i+1);j<n;j++) {
            if(a[j] > a[i]) {
                count  = count + 1; } }
        if(count > max) {
            max = count; } }
    return max; }
int main() {
    int n,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    printf("%d", Max(a,n));
    return 0; }