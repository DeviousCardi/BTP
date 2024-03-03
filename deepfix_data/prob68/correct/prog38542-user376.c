#include<stdio.h>
int d=1;
long int prod(long int a[],long int n) {
    if(n==0)
    return d;
    d=d*a[n-1];
    return prod(a,n-1); }
int main() {
    long int i,p,n;
    scanf("%d",&n);
    long int b[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&b[i]); }
    p=prod(b,n);
    printf("%d",p);
    return 0; }