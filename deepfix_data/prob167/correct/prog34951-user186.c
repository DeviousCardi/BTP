#include<stdio.h>
long long unsigned sum(long int n) {
    long int a;
    scanf("%ld",&a);
    if(n==1)
    return a;
    else
    return a+sum(n-1); }
int main() {
    long int n;
    scanf("%ld",&n);
    printf("%llu",sum(n));
    return 0; }