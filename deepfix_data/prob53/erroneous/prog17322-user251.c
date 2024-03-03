#include<stdio.h>
long long int sum(long long int a[],int l,int n,long long int sum) {
    if(l==n) {
        return a[l]; }
    sum(a,l+1,n,sum+a[l]); }
int main() {
    int n,l=1;
    scanf("%d",&n);
    long long int a[1000000000];
    for(i=0;i<n;i++) {
        scanf("%lld",&a[i]); }
    printf("%lld",a[0]-sum(a,l,n,0));
    return 0; }