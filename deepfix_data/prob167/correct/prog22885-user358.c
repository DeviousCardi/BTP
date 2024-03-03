#include<stdio.h>
int n,k;
long long int sum(int a[],int n) {
    if(n==1) {
        return a[0]; }
    else
    return (a[n-1]+sum(a,n-1)); }
int main() {
    scanf("%d ",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    scanf("%lld ",&a[i]);
    printf("%lld ",sum(a,n));
    return 0; }