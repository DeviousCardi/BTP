#include<stdio.h>
int prod(int a[],int n) {
    int d=1;
    if(n==0)
    return d;
    int d=d*a[n-1];
    return prod(a,n-1); }
int main() {
    int i,p,n;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int p=prod(b,n);
    printf("%d",&p);
    return 0; }