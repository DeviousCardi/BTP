#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int inversions=0;
    for (int i=l; i<l+r-1; i++) {
        for (int j=l+1; j<l+r; j++) {
            if (arr[j]<arr[i]) inversions++;
            printf("%d %d\n", inversions,i); } }
    return inversions; }
int main() {
    int n;
    scanf("%d", &n);
    int r;
    scanf("%d", &r);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        printf("%d\t", arr[i]); }
    return 0; }