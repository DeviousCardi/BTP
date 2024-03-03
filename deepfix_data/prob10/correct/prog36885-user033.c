#include<stdio.h>
int Max(int a[], int n) {
    int i,j;
    int max1;
    int max2 = 0;
    for(i=0;i<n;i++) {
        int count  = 1;
        max1 = a[i];
        for(j=(i+1);j<n;j++) {
            if(a[j] > max1) {
                max1 = a[j];
                count = count + 1; } }
        if(count > max2) {
            max2 = count; } }
    return max2; }
int main() {
    int n,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    printf("%d", Max(a,n));
    return 0; }