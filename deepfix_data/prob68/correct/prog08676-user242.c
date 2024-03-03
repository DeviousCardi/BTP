#include<stdio.h>
long int n;
int t=0;
int prod(long long int m){
    long long int i;
    t++;
    if(t<n){
        scanf("%lld ",&i);
        return (m*prod(i)); }
    return m; }
int main() {
    long long int p,x;
    scanf("%ld\n",&n);
    scanf("%lld ",&x);
    p=prod(x);
    printf("%lld",p); }