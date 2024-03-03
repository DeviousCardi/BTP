#include<stdio.h>
long long int d=1;
long long int prod(long long int a[],long long int n) {
    if(n==0)
    return d;
    d=d*a[n-1];
    return prod(a,n-1); }
int main() {
    long long int i,p,n;
    scanf("%lld",&n);
    long long int b[n];
    for(i=0;i<n;i++) {
        scanf("%lld ",&b[i]); }
    p=prod(b,n);
    printf("%lld",p);
    return 0; }