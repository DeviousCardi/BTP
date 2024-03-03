#include<stdio.h>
long long int diff(long long int a[],long int n) {
    if(n==0)
    return 0;
    return a[0]+diff(&a[1],n-1); }
int main() {
    long int n,i;
    long long int a[100000];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    printf("%lld",2*a[0]-diff(a,n));
    return 0; }