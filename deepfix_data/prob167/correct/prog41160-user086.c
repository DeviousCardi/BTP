#include<stdio.h>
long sum(long x[],long n) {
    if(n==1)
    return x[n-1];
    return (x[n-1]+sum(x,n-1)); }
int main() {
    long x[100001];
    long n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++) {
        scanf("%ld ",&x[i]); }
    long sum1;
    sum1=sum(x,n);
    printf("%ld",sum1);
    return 0; }