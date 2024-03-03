#include<stdio.h>
long sum(int k,int n) {
    if(k==n)
    return 0;
    long x;
    scanf("%ld",&x);
    return x+sum(k+1,n); }
int main() {
    int n;
    long s;
    scanf("%d",&n);
    s=sum(0,n);
    printf("%ld",s);
    return 0; }