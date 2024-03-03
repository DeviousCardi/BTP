#include<stdio.h>
int diff(int[],int,int);
int main() {
    long long int a[100000];
    long long int i,n;
    int j;
    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%lld",&a[i]); }
    j=diff(a,0,n);
    printf("%lld",j);
    return 0; }
int diff(int a[100],int i,int n) {
    if(n-1==0) {
        return a[0]; }
    else {
        return diff(a,i,n-1)-a[n-1]; } }