#include<stdio.h>
int sum(long int x[],long int n) {
    if(n==1)
    return x[0];
    return (x[n-1]+sum(x,n-1)); }
int main() {
    long int x[1000000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%ld",&x[i]); }
    int sum1;
    sum1=sum(x,n);
    printf("%ld",sum1);
    return 0; }