#include<stdio.h>
int diff(long int x[],long int n) {
    int d=0;
    if(n==1) {
        d=d+x[0]; }
    else {
        d=d-x[n-1] + diff(x,n-1); }
    return d; }
int main() {
    long int n;
    int d;
    scanf("%ld",&n);
    long int x[n];
    for(int i=0;i<n;i++) {
        scanf("%ld",&x[i]); }
    d=diff(x,n);
    printf("%d",d);
    return 0; }