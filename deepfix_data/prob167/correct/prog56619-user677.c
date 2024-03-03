#include<stdio.h>
long long sum=0;
long  summ(long  a[],long n);
long  summ(long  a[],long n) {
    if(n<0)
    return 0;
    sum=sum+a[n];
    return summ(a,n-1); }
int main() {
    long  a[200000],n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    summ(a,n);
    printf("%lld",sum);
    return 0; }