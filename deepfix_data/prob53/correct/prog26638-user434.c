#include<stdio.h>
const unsigned int sz = 1000000;
int diff(int ar[], int n) {
    if(n==1)
        return ar[0];
    else
        return diff(ar, n-1) - ar[n-1]; }
int main() {
    int n;
    int ar[sz];
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
        scanf("%d", &ar[i]);
    printf("%d", diff(ar, n));
    return 0; }