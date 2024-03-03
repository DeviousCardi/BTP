#include<stdio.h>
long long int diff(long long int[],long long int);
int main() {
    long long int a[100000];
    long long int i,n;
    long long int j;
    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%lld",&a[i]); }
    j=diff(a,n);
    printf("%lld",j);
    return 0; }
long long int diff(long long int a[100000],long long int n) {
    if(n-1==0) {
        return a[0]; }
    else {
        return diff(a,n-1)-a[n-1]; } }