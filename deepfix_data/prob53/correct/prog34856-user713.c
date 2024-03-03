#include<stdio.h>
int c=0;
long int difference(long int a[],long int n) {
    long int diff=0;
    if(n==0) {
        diff=a[n]+diff; }
    diff=diff-a[n-1];
    c++;
    return ( difference( a,n-1)); }
int main() {
    long int a[100000], n, result;
    int i;
    scanf("%ld\n",&n);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    result= difference(a,n);
    printf("%ld",result);
    return 0; }