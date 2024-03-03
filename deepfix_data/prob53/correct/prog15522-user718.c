#include<stdio.h>
long int diff(long int a[], int n) {
    if(n == 1) return (a[0] - a[1]);
    else return (diff(a, n-1) - a[n]); }
int main() {
    int n;
    scanf("%d", &n);
    long int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%ld", &arr[i]);
    printf("%ld", diff(arr, n-1));
    return 0; }