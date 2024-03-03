#include<stdio.h>
int arr[100];
int getInversions(int l,int r) { }
int main() {
    int n;
    scanf("%d", &n);
    int r;
    scanf("%d", &r);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    int maxInversions= getInversions(0,r);
    for (int i=1; i<n-k+1; i++) {
        int c= getInversions(i,r);
        if (c>=maxInversions) maxInversions=c; }
    printf("%d", maxInversions);
    return 0; }