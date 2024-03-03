#include<stdio.h>
long int difference(long int a[],long int n) {
    if(n==1) {
        return a[n-1]; }
    else {
        return ( difference( a,n-1)- a[n-1]); } }
void input (long int a[], long int n) {
    if(n<0)
    return;
    scanf("%ld ",&a);
    return (input (a,n-1)); }
int main() {
    long int a[100000], n, result;
    scanf("%ld\n",&n);
    input(a,n);
    result= difference(a,n);
    printf("%ld",result);
    return 0; }