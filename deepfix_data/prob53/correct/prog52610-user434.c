#include<stdio.h>
#define MAX 100000
long long diff(int ar[], int n) {
    if(n==1)
        return (long long)ar[0];
    else
        return diff(ar, n-1) - ((long long)ar[n-1]); }
int main() {
    int ar[MAX];
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
        scanf("%d", &ar[i]);
    printf("%lld", diff(ar, n));
    return 0; }