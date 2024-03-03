#include<stdio.h>
int cumulative_sum(long long int a[],int start,int size) {
    if (size==1) return a[start];
    else return a[start]+cumulative_sum(a,start+1,size-1); }
int main() {
    int n; scanf("%d",&n);
    long long int a[n];
    for (int i=0;i<n;i++) scanf("%lld",&a[i]);
    long long int sum=cumulative_sum(a,0,n);
    printf("%lld",sum);
    return 0; }