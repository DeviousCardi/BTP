#include<stdio.h>
long int sum(long int a[],long int start,long int n) {
    static int ans=0;
    if(start==n-1) {
        return ans; }
    ans=ans+sum(a,start+1,n); }
int main() {
    long int n,a[1000000000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    return 0; }