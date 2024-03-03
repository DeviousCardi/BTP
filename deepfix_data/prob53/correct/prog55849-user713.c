#include<stdio.h>
long int difference(long int a[],long int n) {
    if(n==1) {
        return a[0]; }
    else {
        return ( difference( a,n-1)- a[n-1]); } }
int main() {
    long int a[100000], n, result;
    long int i;
    scanf("%ld\n",&n);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    result= difference(a,n);
    printf("%ld",result);
    return 0; }