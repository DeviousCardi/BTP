#include<stdio.h>
long int diffofseries(long int a[],long int start,long int end,long int sum) {
    if(start>end) {
        return sum; }
    return diffofseries(a,start+1,end,sum-a[start]); }
int main() {
    long int n,arr[100000],ans;
    scanf("%ld",&n);
    for(int i=0;i<n;i++) {
        scanf("%ld",&arr[i]); }
    ans=diffofseries(arr,1,n-1,arr[0]);
    printf("%ld",ans);
    return 0; }