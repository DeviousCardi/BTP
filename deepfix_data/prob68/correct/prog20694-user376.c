#include<stdio.h>
int d=1;
long prod(long a[],long n) {
    if(n==0)
    return d;
    d=d*a[n-1];
    return prod(a,n-1); }
int main() {
    long int i,p,n;
    scanf("%ld",&n);
    long b[n];
    for(i=0;i<n;i++) {
        scanf("%ld ",&b[i]); }
    p=prod(b,n);
    printf("%ld",p);
    return 0; }