#include<stdio.h>
long long fun(long long arr[],long long n) {
    if(n==1)
    return arr[0];
    long long ans=fun(arr[],n-1)-arr[n];
    return ans; }
int main() {
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    int ans=fun(arr,n);
    printf("%lld",ans);
    return 0; }