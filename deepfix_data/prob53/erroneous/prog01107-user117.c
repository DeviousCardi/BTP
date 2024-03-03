#include<stdio.h>
int diff(int*, int)
int main() {
    int n, i, j;
    scanf("%d\n", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    printf("%d", diff(arr, n));
    return 0; }
int diff(*p, n) {
    static int b=n;
    if(n==b-1)
    return(reqdiff);
    int reqdiff=*p-diff(++*p, n-1); }