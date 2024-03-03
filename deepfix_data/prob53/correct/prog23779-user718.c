#include<stdio.h>
int differ(int a[], int n, int diff) {
    if(n == 0)      return diff - a[0];
    else            return differ(a, n-1, diff - a[n]); }
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return 0; }