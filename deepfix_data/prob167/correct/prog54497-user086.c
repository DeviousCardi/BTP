#include<stdio.h>
unsigned long sum(double x[],long int n) {
    if(n==1)
    return x[n-1];
    return (x[n-1]+sum(x,n-1)); }
int main() {
    unsigned long x[100001];
    long int n,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++) {
        scanf("%ld ",&x[i]); }
    unsigned long int sum1;
    sum1=sum(x,n);
    printf("%ld",sum1);
    return 0; }