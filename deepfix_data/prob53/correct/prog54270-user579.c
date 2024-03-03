#include<stdio.h>
long int sum(long int a[],long int start,long int n) {
    static long int ans=0;
    if(start==n-1) {
        return ans; }
    ans=ans-sum(a,start+1,n); }
int main() {
    long int n,arr[1000000000];
    scanf("%ld",&n);
    for(int i=0;i<n;i++) {
        scanf("%ld",&arr[i]); }
    printf("%ld",sum(arr,0,n));
    return 0; }