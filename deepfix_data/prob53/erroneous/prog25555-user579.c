#include<stdio.h>
long int diffofseries(long int a[],long int start,long int end,long int sum) {
    if(start>end) {
        return sum; }
    return diffofseries(a,start+1,end,sum-a[start]); }
int main() {
    long int n,arr[1000000000],ans;
    scanf("%ld",&n);
    for(int i=0;i<n;i++) {
        scanf("%ld",&arr[i]); }
    ans=diffofseries(a,1,n-1,a[0]);
    printf("%ld",ans);
    return 0; }