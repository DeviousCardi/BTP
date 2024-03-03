#include<stdio.h>
int diff(int long a[],int n) {
    if(n==1)
    return a[n-1];
    if(n==0)
    return 0;
    if(n>1)
    return(a[n-1]-a[n]); }
int main() {
    int long n,d;
    scanf("%ld",&n);
    int long a[n];
    d=diff(a,n);
    printf("%d",d);
    return 0; }