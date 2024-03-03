#include<stdio.h>
long long int a[100000];
int fun(int n) {
    if(n>0)
    return a[n]+fun(n-1);
    if(n==0)
    return a[0]; }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    long long int sum=fun(n);
    printf("%lld",sum);
    return 0; }