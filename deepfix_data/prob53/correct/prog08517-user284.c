#include<stdio.h>
int diff(long long int[],int);
int main() {
    long long int a[100000];
    long long int i,n;
    int j;
    scanf("%lld",&n);
    if (n<=100000) {
    for(i=0;i<n;i++) {
        scanf("%lld",&a[i]); }
    j=diff(a,n);
    printf("%d",j); }
    return 0; }
int diff(long long int a[100000],int n) {
    if(n-1==0) {
        return a[0]; }
    else {
        return diff(a,n-1)-a[n-1]; } }