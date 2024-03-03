#include<stdio.h>
#define MAX 100000
long diff(int ar[], int n) {
    if(n==1)
        return (long)ar[0];
    else
        return diff(ar, n-1) - ((long)ar[n-1]); }
int ar[MAX];
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
        scanf("%d", &ar[i]);
    printf("%ld", diff(ar, n));
    return 0; }